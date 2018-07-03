#include <stdio.h>

int power(int x, unsigned p) {
    int answer = x;
    /* считаем answer */
    for (int i = 1; i < p; i++)
    {
    answer *= x;
    }
    return answer;
}

int main ()
{
printf (power (3,2));
}