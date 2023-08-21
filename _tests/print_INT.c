#include "main.h"

void rec(unsigned int n, int *counter)
{
	if (n / 10 > 0)
		rec(n / 10, counter);
	_putchar(n % 10 + '0');
	(*counter)++;
}
int print_INT(va_list arg)
{
	int counter = 0;
	 int x = va_arg(arg, unsigned int);
	unsigned int z  = x;

	if (x < 0)
	{
		_putchar('-');
		z *= -1;
	}

	rec(z, &counter);
	return (counter);
}
