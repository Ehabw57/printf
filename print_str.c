#include "main.h"
int print_str(char *c)
{
	int i = 0;

	if (c)
	{
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	}

	return (i);
}
