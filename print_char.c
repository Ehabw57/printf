#include "main.h"
/**
 * print_char - prints a simple char on the stops using _putchar
 * @arg: va_list parmeter used to locate the char to be print
 * Return: the lenth of the char that has been printed
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
