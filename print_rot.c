#include "main.h"
/**
 * print_rot - function prints the rot13'ed string
 * @arg: origin string
 * Return: size of string
 */
int print_rot(va_list arg)
{
	char *s = va_arg(arg, char *);
	*s = va_arg(arg, char *);
	int i, j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; output[j] != '\0'; j++)
		{
			if (s[i] == output[j])
			{
				_putchar(input[i]);
				break;
			}
		}
	}
	return (i);
}
