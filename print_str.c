#include "main.h"
int print_str(va_list arg)
{
	int i = 0;
	char *c = va_arg(arg, char *);

	if (!c)
	{
		return (-1);
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	return (i);
}
