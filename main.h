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
}form;

int _printf(const char *format, ...);
int _putchar(int s);
int print_str(va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);
<<<<<<< HEAD
int print_INT(va_list arg);

=======
int print_percent();
>>>>>>> fb337e95e589808ec1661e385b96251acda9fd6a
#endif
