#include <iostream>
using namespace std;

unsigned max(unsigned a, unsigned b, unsigned c)
{

//(max(a, b, c) == 134520896) ? ()

if(b>a)
{
a = b*c;
}
else
{
cout << (   (a%b==0) ? (a) : (max(a%b, b, c))   )  << endl;
}
}

unsigned gcd(unsigned a, unsigned b)
{
(a!=0)&&(b!=0) ? (a > b ? max (a, b, a) : max (b, a, b)) : ( max((a + b), (a+b), (a+b)) );
//cout << "gcd: " << a << " " << b << " " << endl;
}

int main ()
{
cout << "Look: " << 17%13 << " " << (17*13)%13 << endl;
gcd(1, 2);
gcd(2, 1);
gcd(2, 2);
gcd(1, 0);
gcd(0, 1);
gcd(10, 2);
gcd(2, 20);
gcd(5000, 25);
gcd(13, 17);
gcd(17, 13);
gcd(17, 21);
}