#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	form arr[] = {
		{'s', print_str}, {'c', print_char},
		{'i', print_INT}, {'d', print_INT},
		{'%', print_percent}, {'\0', NULL}};

	int i = 0, j = 0, len = 0, sum = 0;
	va_list List;

	va_start(List, format);

	if ((format[i] == '%' && (format[i + 1] != ' ' || format[i + 1] == '\0')) || format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && search_f(format[i + 1], "csid%") == 0)
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
