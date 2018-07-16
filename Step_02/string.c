#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

//using namespace std;

struct String 
{

    /* Реализуйте этот конструктор */
	String(size_t n, char c)
        : size(n), str(new char[size])
        {
            	size = n;
		char *str = new char[n+1];
		for(int i = 0; i < n; i++)
            	{
		     
			str[i] = c;
			std::cout << "str[" << i << "] = " << str[i] << " c = " << c << std::endl;
		}
			str[n] = '\0';
//	        if(str[n] == '\0')
        }
    
    /* и деструктор */
	~String()
    {
        std::cout << "Here?" << std::endl;
	delete[] str;
    }
        
    size_t size;
    char *str;
};

int main()
{
char t = '1';
String s(1, (char)t);
std::cout << "s.size = " << s.size <<  std::endl;

}