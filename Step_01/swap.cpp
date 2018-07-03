#include <iostream>
using namespace std;

void swap (int * a, int * b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void rotate(int * a, unsigned size, int shift)
{
if (!shift)
{}
else
{
for (int i = 1; i < shift; ++i)
    {
    swap(a[i], a[i++]);
    
    }
swap (a[0], a[size]);
}
}




int main()
{
int a[5] = {0, 1, 2, 3, 4};
unsigned s = 5;
int sh = 2;
rotate (&a[5], s, sh);
for (int i = 0; i < s; i++)
{
cout << "a[" << i << "]= " << a[i] << endl;
}
}