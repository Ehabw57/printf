#include "main.h"
void reprint(int i, int last, int *count)
{
	if (i == 0)
		return;

	last = i % 10;
	i /= 10;
	reprint(i, last, count);
	_putchar('0' + last);
	(*count)++;
}

int print_int(va_list arg)
{
	int i, count = 0;

	i = va_arg(arg, int);
	if (i == 0)
	{
		_putchar(0 + '0');
		return (0);
	}

	else if (i < 0)
	{
		i = -i;
		_putchar('-');
		reprint(i, 0, &count);
	}

	else
	{
		reprint(i, 0, &count);
	}

	return (count);
}
