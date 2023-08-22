#include "main.h"
/**
 * rec_binary - find the binary base then print it reversly
 * @n: the num to find it's base 2
 * @ptr: pointer to the counter
 */
void rec_binary(unsigned int n, unsigned int *ptr)
{
	int r;

	if (n == 1)
	{
		_putchar(1 + '0');
		(*ptr)++;
		return;
	}

	r = n % 2;
	n = n / 2;

	rec_binary(n, ptr);
	_putchar(r + '0');
	(*ptr)++;
}
/**
 * print_Binary - prints n in base 2
 * @arg: va_list var contains the num to convert
 * Return: the number of digites were printed
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
