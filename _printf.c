#include "main.h"

/**
 * _printf - a vardaric function smilliar to printf from the stdio.h headder
 * @format: string to be printed and search for format spicfire
 * Return: the lenth of the text that has been printed or -1 if fails
*/
int _printf(const char *format, ...)
{
	form arr[] = {
				{'s', print_str}, {'c', print_char},
<<<<<<< HEAD
				{'i', print_int}, {'d', print_INT},
				{'b', print_binary}, {'o', print_oct},
				{'x', print_hex}, {'X', print_HEX},
			       	{'%', print_percent}, {'\0', NULL}};
=======
				{'i', print_INT}, {'d', print_INT},
				{'b', print_Binary}, {'%', print_percent},
				{'\0', NULL}};
>>>>>>> 8f0c3561089785787f78557a078f0abea64ecb6c

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
			flag = search_f(format[i], "scidboxX%");
			if (flag >= 0)
			{
				len += arr[flag].fun(List);
				sum += 2;
				i++;
			}
			else
				_putchar('%');
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
