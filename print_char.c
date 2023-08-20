#include "main.h"
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	if (!c)
	{
		exit(-1);
	}

	_putchar(c);
	return (1);
}
