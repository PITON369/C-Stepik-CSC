#include <iostream>
using namespace std;


int i = 0;

int foo(int n) {
i++;   
cout << i << endl;
 if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}

int main ()
{
cout << foo(3) << endl;
}