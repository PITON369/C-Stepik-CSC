//https://stepik.org/lesson/540/step/6?unit=863

/*Очень часто для работы со строками нам нужно сначала вычислить длину строки. Для C-style строк длина нигде явно не хранится, но её можно вычислить. Напишите функцию, которая вычисляет длину C-style строки. Учтите, что завершающий нулевой символ считать не нужно.

Требования к реализации: при выполнении этого задания вы можете создавать любые вспомогательные функции. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.
*/

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
    
    for (int j = size1, i = 0; i <= size2+1; j++, i++)
    {

to[j] = from[i];
    }  
}
