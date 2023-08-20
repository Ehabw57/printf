#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	form arr[] = {
		{'s', print_str},
		{'c', print_char},
		{'i', print_int},
		{'d', print_INT},
		{'d', print_int},
		{'%', print_percent},
		{'\0', NULL}};
	int i = 0, j = 0, len = 0, sum = 0;
	va_list List;

	va_start(List, format);
	if (format == NULL)
	{
		exit(-1);
	}

	while (format != NULL && format[i] != '\0')
	{

		if (format[i] == '%')
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
