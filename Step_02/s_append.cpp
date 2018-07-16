#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

using namespace std;

struct String 
{
	String(const char *str = "") 
    {
        size = strlen(str);
        char *rts = new char[size+1];
        strcpy(rts,str);
    
        this->str = rts;

    }


	String(size_t n, char c)
    {            
        size = n;
		str = new char[n+1];
		for(int i = 0; i < n; i++)
            	{
		     
			str[i] = c;
		}
			str[n+1] = '\0';
    }
    
    /* и деструктор */
	~String()
    {
	delete[] str;
    }


    /* Реализуйте этот метод. */
	void append(String &other)
    	{
		char * rts = new char[this->size + other.size + 1];
	
		for(int i = 0; i < (this->size + other.size + 1); i++)
		{
			if(i < size)	
			{
				rts[i] = str[i];
			}
			else
			{
				rts[i] = other.str[i-size];
			}
			cout << "rts[" << i << "] = " << rts[i] << endl;
    		}
		delete[] str;
		str = new char[this->size + other.size + 1];
		for(int i = 0; i < (this->size + other.size + 1); i++)
		{
			str[i] = rts[i];
				cout << "str[" << i << "] = " << str[i] << endl;
		}
		this->size = strlen(this->str);
        	delete[] rts;
	}
	size_t size;
	char *str;
	
};

int main()
{
String s("Hello");
String m("ho, ooooooooooooo");
s.append(s); 
cout << "s: " << s.str << " size = " << s.size << endl;
if(s.str[s.size] == '\0')
cout << "All good!" << endl;
}