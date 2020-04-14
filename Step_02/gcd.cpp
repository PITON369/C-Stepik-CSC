//https://stepik.org/lesson/538/step/8?unit=861

/*Напишите рекурсивную функцию вычисления наибольшего общего делителя двух положительных целых чисел (Greatest Common Divisor, GCD). Для этого воспользуйтесь следующими свойствами:

    GCD(a,b)=GCD(b,a mod b) GCD(a, b) = GCD(b, a \bmod b) GCD(a,b)=GCD(b,amodb)
    GCD(0,a)=a GCD(0, a) = a GCD(0,a)=a
    GCD(a,b)=GCD(b,a) GCD(a, b) = GCD(b, a) GCD(a,b)=GCD(b,a)

Требования к реализации: в данном задании запрещено пользоваться циклами. Вы можете заводить любые вспомогательные функции, если они вам нужны. Функцию main определять не нужно.*/

unsigned gcd (unsigned a, unsigned b) { 
return !b ? a : gcd (b, a % b); 
}
