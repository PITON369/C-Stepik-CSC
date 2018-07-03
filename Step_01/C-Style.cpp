#include <iostream>
using namespace std;

unsigned strlen(const char *str)
{
    int i = 0;
    for (i; str[i]; i++)
    {}
    return i;
}

void strcat(char *to, const char *from)
{
    int size1 = strlen (to);
    int size2 = strlen (from);
    int j = 0;
    int i = 0;

    for (j = 2, i = 0; i <= size2; j++, i++)
    {
cout << "A)j= " << j << " i= " << i << endl;
cout << "to=" << to << " from=" << from << endl; 
cout << "to[j]=" << to[j] << " from[i]=" << from [i] << endl;   
to[j] = from[i];
cout << "B)j= " << j << " i= " << i << endl;
    }
cout << "ENDL" << endl;
    
}


int main ()
{

char t[8] = "Fuck???";
const char f[4] = "ck!";

char *to = &t;
const char *from = &f;
strcat(*to, *from);
}

