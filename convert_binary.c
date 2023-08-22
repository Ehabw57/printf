#include "main.h"
int convert_binary(va_list arg)
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
