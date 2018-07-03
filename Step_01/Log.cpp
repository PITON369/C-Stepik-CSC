#include <iostream>
using namespace std;

int OloLog(int a)
{
    int p = 0;
    int t = 2;
     if (a == 1)
    {
    p = 1;
    }
    else
    while (t<a)
    {
    t*=2;
    p++;
    }
    //cout << p << endl;
   
    return p;
}

int main ()
{
    int T = 0;
    int t = 0;
    cin >> T;
    while (T > 0)
    {
        cin >> t;
        cout << OloLog(t) << endl;
        T--;
    }
    return 0;
}




