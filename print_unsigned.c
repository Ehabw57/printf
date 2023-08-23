#include "main.h"
/**
 * recer - go throug each digit of n and print it reverse
 * @n: the number to be print
 * @counter: a counter to detrmine how many digits were printed
 */

void recer(unsigned int n, int *counter)
{
        if (n / 10 > 0)
                recer(n / 10, counter);

        _putchar(n % 10 + '0');
        (*counter)++;
}
/**
 * print_unsigned - print x in a postive case
 * @arg: va_list parameter to lacat the value of x
 * Return: the count of how many digitts printed
 */
int print_unsigned(va_list arg)
{
        int counter = 0;
        int x = va_arg(arg, int);
        unsigned int z = x;



        recer(z, &counter);
        return (counter);
}
