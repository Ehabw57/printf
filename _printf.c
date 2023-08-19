#include "main.h"

int _printf(const char *format, ...)
{
	form arr[] = {
		{'i', print_str},
		{'c', print_char},
		{NULL, NULL}
	};

	va_list List;
	int i = 0, j;
	va_start(List, format);

	while (format != NULL && format[i] != '\0')
	{

		if (format[i] == '%')
		{
			j = 0;
			while (arr[j] != NULL)
			{
				if ((format[i + 1]) == form[j].f)
					form[j].fun(List);
				j++;
			}
		}
		_putchar(format[i]);
		i++;
	}
	va_end(List);
}
