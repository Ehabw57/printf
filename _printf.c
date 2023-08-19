#include "main.h"

int _printf(const char *format, ...)
{
	form arr[] = {
		{'s', print_str},
		{'c', print_char},
		{'\0', NULL}
		};

	va_list List;
	int i = 0, j;
	va_start(List, format);

	while (format != NULL && format[i] != '\0')
	{

		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (arr[j].f != '\0')
			{
				
				if ((format[i]) == arr[j].f)
				{
				 arr[j].fun(List);

				}

				j++;
				
			}
			i++;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(List);
}
