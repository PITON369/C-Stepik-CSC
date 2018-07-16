#include <iostream>
using namespace std;

struct Point 
{
	Point () 
	{
		a = b = 0; //a = (b = 0);
	}
	Point(double x, double y)
	{
		this->a = x;
		this->b = y;
	}
	double a;
	double b;
};

int main()
{
Point p1; // p1 = {0, 0};
Point p2(3, 7);

cout << "p1: " << endl;
cout << "p1.x = " << p1.a << endl;
cout << "p1.y = " << p1.b << endl;

cout << "p2: " << endl;
cout << "p2.x = " << p2.a << endl;
cout << "p2.y = " << p2.b << endl;
}