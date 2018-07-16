#include <iostream>

using namespace std;
 
  struct Cls {
  Cls(char c, double d, int i);
  private:
      char c;
      double d;
      int i;
  };
 
 
/*void foo() {
    cout << "Hello" << endl;
    
}*/
// Эта функция должна предоставить доступ к полю c объекта cls.
// Обратите внимание, что возвращается ссылка на char, т. е.
// доступ предоставляется на чтение и запись.
char &get_c(Cls &cls) {
  /*  int * m[1];
    m[3] = (int *) &foo;
    return 1;*/
}

// Эта функция должна предоставить доступ к полю d объекта cls.
// Обратите внимание, что возвращается ссылка на double, т. е.
// доступ предоставляется на чтение и запись.
double &get_d(Cls &cls) {
    /* ... */
}

// Эта функция должна предоставить доступ к полю i объекта cls.
// Обратите внимание, что возвращается ссылка на int, т. е.
// доступ предоставляется на чтение и запись.
int &get_i(Cls &cls) {
    /* ... */
}

int main()
{
cout << "Let's start begin!" << endl;
char c = 1;
double d = 2;
int i = 3;
Cls * Old = new Cls(c, d, i);
cout << "Cls.c = " << endl;
}