#include <iostream>
using namespace std;

char *resize(const char *str, int size, int new_size)
{
    
        char * rts = new char[new_size];
    
        for(int i = 0; i < size; ++i)
            {
            rts[i] = str[i];
            }
        delete [] str;
        return rts;   
}

char *getline()
{
    	char letter = 0;
    	int i = 0;
    	int size = 1;
    	char *L =  new char[size];
    
    	
	    while (cin.get(letter)&&letter != '\n')
    	{
		    L[i] = letter;
		    
                L = resize(L, size, ++size);
            
            i++;
        }
    	L[i] = '\0';

    	return L;
}

int main()
{

	getline();

}