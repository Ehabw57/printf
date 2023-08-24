#include "main.h"
/**
 * print_rot - function prints the rot13'ed string
 * @arg: origin string
 * Return: size of string
 */
int print_rot(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i, j;
	char *input = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *output = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
			{
				_putchar(output[j]);
				break;
			}
		}
		if (input[j] == '\0')
				_putchar(s[i]);
	}
	return (i);
}
