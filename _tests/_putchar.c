#include "main.h"
/**
 * _putchar - a simple func to write inside the standard output stream one char
 * @s: the char to be writed
 * Return: the char that have been ptinted
*/
int _putchar(int s)
{
	return (write(1, &s, 1));
}
