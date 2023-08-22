#include "main.h"
/**
 * rec - go throug each digit of n and print it reverse
 * @n: the number to be print
 * @counter: a counter to detrmine how many digits were printed
 */

void rec(unsigned int n, int *counter)
{
	if (n / 10 > 0)
		rec(n / 10, counter);

	_putchar(n % 10 + '0');
	(*counter)++;
}
/**
 * print_INT - detrmine weather x is a postibe or negative number
 * @arg: va_list parameter to lacat the value of x
 * Return: the count of how many digitts printed
 */
int print_INT(va_list arg)
{
	int counter = 0;
	int x = va_arg(arg, unsigned int);
	unsigned int z = x;

	if (x < 0)
	{
		_putchar('-');
		z *= -1;
		counter++;
	}

	rec(z, &counter);
	return (counter);
}
