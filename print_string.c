#include "main.h"
/**
 * convert - to convert ASCII value to hexadecimal
 * @num: ASCII value
 * Return: number of digits
 */
int convert(int num)
{
	char arr[100];
	int n, i = 0;

	if (num == 0)
	{
		_putchar('0' + 0);
		return (1);
	}

	while (num)
	{
		if (num % 16 < 10)
			arr[i] = (num % 16) + 48;
		else
			arr[i] = (num % 16) + 55;
		num /= 16;
		i++;
	}
	for (n = i - 1; n >= 0; n--)
		_putchar(arr[n]);
	return (i);
}
/**
 * print_string - convert character
 * @arg: origin string
 * Return: the lengh of digits
 */
int print_string(va_list arg)
{
	char *ptr = va_arg(arg, char *);
	int asci, i;
	int len = 0;

	if (ptr == NULL)
		ptr = "(null)";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		asci = ptr[i];
		if ((asci > 0 && asci < 32) || asci >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (asci < 16)
			{
				_putchar('0');
				len++;
			}
			len += 2;
			len += convert(asci);
		}
		else
		{
			_putchar(ptr[i]);
			len++;
		}
	}
	return (len);
}
