#include <iostream>
using namespace std;

unsigned jjj(unsigned *j, unsigned ror)
{
++*j;
cout << "j = " << *j << " ror = " << ror << endl;
return *j;
}

//Создание массива хорошее
int** create_array2d_good(unsigned a, unsigned b)
{
	int ** m = new int *[a];
	m[0] = new int[a*b];
	for(unsigned i = 1; i != a; ++i)
	{
		m[i] = m[i - 1] + b;
	}
	return m;
}
//Освобождение массива хорошее
void free_array2d_good(int ** m, unsigned a, unsigned b)
{
	delete [] m[0];
	delete [] m;
}
//Вывод массива
void cout_array2d(int ** m, unsigned rows, unsigned cols)
{
	for(unsigned i = 0; i != rows; ++i)
	{
		for(unsigned j = 0; j != cols; ++j)
		{
			cout << "Array[" << i << "][" << j << "] = " << m[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl;
}
//Заполнение массива
void array_initialisation(int ** m, unsigned rows, unsigned cols, unsigned stage)
{
	for(unsigned i = 0; i != rows; /*jjj(&i, rows)*/++i)
	{
		for(unsigned j = 0; j != cols; /*jjj(&j, cols)*/++j)
		{
			m[i][j] = (i + j) * stage;	
		}
		cout << endl;
	}
	cout << endl;
}
//Функция, которую надо реализовать
int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
	int ** tm = new int *[cols];
	tm[0] = new int[cols*rows];

	tm = create_array2d_good(cols, rows);
	cout << "1cout in transpose:" << endl;	
	cout_array2d(tm, cols, rows);
	
		for(unsigned i = 0; i != rows; /*jjj(&i, cols))*/++i) 
		{
/*		cout << "tm[3][3] = " << tm[3][3] << endl;
		cout << "tm[3][4] = " << tm[3][4] << endl;
		cout << "tm[4][3] = " << tm[4][3] << endl;
		cout << "tm[4][4] = " << tm[4][4] << endl;*/
			for(unsigned j = 0; j != cols; /*jjj(&j, rows))*/++j)
			{
				tm[j][i] = m[i][j];
			}	
		}

	cout << "2cout in transpose:" << endl;	
	cout_array2d(tm, cols, rows);

	return tm;
}

int main ()
{
	cout << "Start" << endl;
	unsigned rows1 = 0;
	unsigned cols1 = 0;
	int ** tm1 = new int *[rows1];
	tm1[0] = new int[rows1*cols1];
	tm1 = create_array2d_good(rows1, cols1);
	array_initialisation(tm1, rows1, cols1, 1);
	cout << "tm1:" << endl;	
	cout_array2d(tm1, rows1, cols1);

	unsigned rows2 = cols1;
	unsigned cols2 = rows1;
	int ** tm2 = new int *[rows2];
	tm2[0] = new int[rows2*cols2];
	tm2 = create_array2d_good(rows2, cols2);
	array_initialisation(tm2, rows2, cols2, 3);
	cout << "tm2:" << endl;		
	cout_array2d(tm2, rows2, cols2);

	cout << "Transpose:" << endl;
	tm2 = transpose(tm1, rows1, cols1);

	cout << "Answer:" << endl;

	cout_array2d(tm2, rows2, cols2);






}