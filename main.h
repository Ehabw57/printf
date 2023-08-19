#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
typedef struct format
{
	char f;
	int (*fun)(va_list);
}format;

int _printf(const char *format, ...);
int _putchar(int s);
int print_str(char *c);
int print_char(char c);

#endif
