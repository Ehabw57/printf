#include "main.h"
void rec (int n)
{
	if (n / 10 > 0)
		rec(n / 10);
	_putchar(n % 10 + '0');
}
int print_INT(va_list arg)
{
	int x = va_arg(arg, int);

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}

	rec(x);
}
