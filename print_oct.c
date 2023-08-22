#include "main.h"
/**
 * print_oct - covers a given num to base 8 then print the result
 * @arg: va_list varible to locate the num to conver and print
 * Return: the lenth of the digit printed
 */
int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i = 0, n, arr[100];

	if (num == 0)
	{
		_putchar(0 + '0');
		return (1);
	}

	while (num)
	{
		arr[i] = num % 8;
		num /= 8;
		i++;
	}

	for (n = i - 1; n >= 0; n--)
		_putchar(arr[n] + '0');
	return (i);
}
