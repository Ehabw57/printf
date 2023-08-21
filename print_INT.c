#include "main.h"

void rec(int n, int *counter)
{
	if (n / 10 > 0)
		rec(n / 10, counter);
	_putchar(n % 10 + '0');
	(*counter)++;
}
int print_INT(va_list arg)
{
	int counter = 0;
	unsigned int x = va_arg(arg, int);

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}

	rec(x, &counter);
	return (counter);
}
