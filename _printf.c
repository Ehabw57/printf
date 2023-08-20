#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	form arr[] = {
		{'s', print_str},
		{'c', print_char},
		{'\0', NULL}};

	va_list List;
	int i = 0, j, len = 0;
	int sum = 0;
	va_start(List, format);

	while (format != NULL && format[i] != '\0')
	{

		if (format[i] == '%' && format[i + 1] != '%')
		{

			j = 0;
			i++;
			while (arr[j].f != '\0')
			{
				if ((format[i]) == arr[j].f)
				{
					i++;
					sum += 2;
					len += arr[j].fun(List);
				}

				j++;
			}

			
		}
		else
		{
		_putchar(format[i]);
		i++;
		}
	}
	va_end(List);
	return (i + len - sum);
}
