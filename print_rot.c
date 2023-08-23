#include "main.h"
/**
 * print_rot - function prints the rot13'ed string
 * @arg: origin string
 * Return: size of string
 */
int print_rot(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i, j, len = 0, l;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;
		for (j = 0; output[j] != '\0' && !l; j++)
		{
			if (s[i] == output[j])
			{
				_putchar(input[i]);
				len++;
				l = 1;
			}
		}
		if (!l)
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
