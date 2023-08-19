#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
typedef struct format
{
	char form;
	void (*f)(va_list);
}format;

int _printf(const char *format, ...);
int _putchar(int s);
void print_str(char *c);
#endif
