#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
        form arr[] = {
                {'s', print_str}, {'c', print_char},
                {'i', print_INT}, {'d', print_INT},
                {'%', print_percent}, {'\0', NULL}};

        int i = 0, len = 0, sum = 0, flag;
        va_list List;
	
	 if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
        va_start(List, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			flag = search_f(format[i], "scid%");
			if (flag >= 0)
			{
				len += arr[flag].fun(List);
				sum += 2;
				i++;
			}
			else{	
				_putchar('%');
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
