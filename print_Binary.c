#include "main.h"
/**
 * rec_binary - will edit this later
 * @n: will edit this later
 * @ptr: will edit this later
 */
void rec_binary(unsigned int n, unsigned int *ptr)
{
	int r;

	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	r = n % 2;
	n = n / 2;
	rec_binary(n, ptr);
	_putchar(r + '0');
	(*ptr)++;
}
/**
 * print_Binary - is gonna be edited
 * @arg: i swear i will edit it
 * Return: will edite it
 */
int print_Binary(va_list arg)
{
	unsigned int n = va_arg(arg, int);
	unsigned int c = 0;

	if (n == c)
	{
		_putchar(0 + '0');
		return (1);
	}
	rec_binary(n, &c);
	return (c);
}
