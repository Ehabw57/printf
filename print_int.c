#include "main.h"
/**
 * reprint - prints each last digit of i in reversed usign recrsion
 * @i: the num to be printed
 * @last: the digit of i
 * @count: a pointer to int to count all the digit that has been printed
 */
void reprint(unsigned int i, int last, int *count)
{
	if (i == 0)
		return;

	last = i % 10;
	i /= 10;
	reprint(i, last, count);
	_putchar('0' + last);
	(*count)++;
}

/**
 * print_int - locates if i is pos or neg num
 * @arg: va_list variable to locate the value of i
 * Return: 0 if i == 0 or the count of the digits of i
 */
int print_int(va_list arg)
{
	unsigned int i;
	int count = 0;
	int n = va_arg(arg, int);
	
	i = n;
	if (i == 0)
	{
		_putchar(0 + '0');
		return (0);
	}

	else if (n < 0)
	{
		i = -i;
		_putchar('-');
		reprint(i, 0, &count);
	}

	else
	{
		reprint(i, 0, &count);
	}

	return (count);
}
