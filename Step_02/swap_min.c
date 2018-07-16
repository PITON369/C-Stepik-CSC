#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

void cout_array2d(int ** m, unsigned rows, unsigned cols)
{
	for(unsigned i = 0; i != rows; ++i)
	{
		cout << "row" << i << ":" << endl;
		for(unsigned j = 0; j != cols; ++j)
		{
			cout << "Array[" << i << "][" << j << "] = " << m[i][j] << endl;
		}
		cout << endl;
	}
}

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

void swap_min(int *m[], unsigned rows, unsigned cols)
{
	int min = m[0][0];
	int min_row = 0;
	int ** tm = new int *[rows];
	tm[0] = new int[rows*cols];
	for(unsigned i = 0; i != rows; ++i)
	{
		for(unsigned j = 0; j != cols; ++j)
		{
			if (m[i][j] < min)
			{
				min_row = i;
				min = m[i][j]; 
			}
		}
	}
	for(int i = 0, j = 0; i <= rows; i++, j++)
	{
		tm[i] = m[j];
	}

	int *t = tm[0];
	tm[0] = m[min_row];
	m[min_row] = t;


	*m = *tm;
	
}

    
void array_initialisation(int ** m, unsigned rows, unsigned cols)
{
	for(unsigned i = 0; i != rows; ++i)
	{
		for(unsigned j = 0; j != cols; ++j)
		{
			if(rand()%10 > 5)			
				m[i][j] = rand()%1000 + rand()%1000;
			else
				m[i][j] = (rand()%1000) - rand()%1000;
		}
		
	}
	
}    
    
int main()
{
	srand(time(0));

        unsigned rows1 = 3;//rand()%10 + rand()%10;    
        unsigned cols1 = 3;//rand()%10 + rand()%10;

	cout << "rows1 = " << rows1 << " cols1 = " << cols1 << endl;
	
	int ** tm1 = new int *[rows1];
	tm1[0] = new int[rows1*cols1];
	tm1 = create_array2d_good(rows1, cols1);
	cout << "tm1:" << endl;	
	array_initialisation(tm1, rows1, cols1);
	//tm1[0][0] = -2;
	//tm1[1][1] = -2;
	cout_array2d(tm1, rows1, cols1);
	swap_min(tm1, rows1, cols1);
	cout << "swaped tm1:" << endl;	
	cout_array2d(tm1, rows1, cols1);
}