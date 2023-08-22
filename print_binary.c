#include "main.h"
/**
 * print_binary - covers a given num to base 2 then print the result
 * @arg: va_list varible to locate the num to conver and print
 * Return: the lenth of the digit printed
 */
int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i = 0, n, arr[100];

	while (num)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	for (n = i - 1; n >= 0; n--)
		_putchar(arr[n] + '0');
	return (i);
}
