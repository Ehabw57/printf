#include "main.h"
/**
 * print_rev - to print string in reverse
 * @arg: origin string
 * Return: size of string
 */
int print_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int j, i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++);

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	return (i);
}
