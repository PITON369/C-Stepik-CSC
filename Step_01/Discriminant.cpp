#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    double D, x1, x2;

    cin >> a >> b >> c;
    
    D = b*b-sqrt((4*a*c));
    
    if (D < 0)
    {
        cout << "No real roots";
        
    }
    else
        if (D == 0)
        {
        x1 = x2 = (-b/(2*a));
        cout << x1 << x2;    
        }
        else
            {
            x1 = (-b + D)/(2*a);
            x2 = (-b - D)/(2*a);
            cout << x1 << x2;
            }   
    

    return 0;
}