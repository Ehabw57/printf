#include "main.h"
/**
 * search_f - searches in side the given pointer fo the char f
 * @f: the char to start searching for
 * @c: pointer to string of the sourc chars
 * Return: the index of c that that f located in or -1 if failed
*/
int search_f(char f, char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == f)
			return (i);
	}
	return (-1);
}
