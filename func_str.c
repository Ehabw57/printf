#include "main.h"
int print_str(char *c)
{
	int i;

	if (!c)
		return (NULL);
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}

	return (i);
}
