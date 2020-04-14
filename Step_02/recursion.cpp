//https://stepik.org/lesson/538/step/10?unit=861

/*Вам требуется написать программу, которая "переворачивает" последовательность положительных целых чисел. На вход подается последовательность разделенных пробелами положительных целых чисел. Последовательность заканчивается нулем. Требуется вывести эту последовательность в обратном порядке.

На выводе числа нужно так же разделить пробелами. Завершающий ноль — это просто индикатор конца последовательности, он не является ее частью, т.е. выводить его не нужно.

Требования к реализации: в данном задании запрещено использовать циклы, а также дополнительную память: массивы, строки или контейнеры (даже, если вы с ними уже знакомы). Вам разрешено заводить вспомогательные функции, если они вам нужны.

Подсказка: используйте рекурсию.

Sample Input:

15 26 1 42 0

Sample Output:

42 1 26 15
*/

#include <iostream>

using namespace std;

int main()
{
int n;

if (cin >> n && n)
    {
    main();
        cout << n << " ";
    }
return 0;
}
