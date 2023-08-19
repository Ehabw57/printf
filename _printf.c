#include "main.h"

int _printf(const char *format, ...)
{
	format[] = {
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
			if ((format[i + 1]) == 's')
		}
		_putchar(format[i]);
		i++;
	}
	va_end(List);
}
