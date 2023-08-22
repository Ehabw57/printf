#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct format - a struct to store the format spicifre and its own print fun
 * @f: the format spicfire
 * @fun: the print functions
*/
typedef struct format
{
	char f;
	int (*fun)();
} form;
int _printf(const char *format, ...);
int search_f(char f, char *c);
int _putchar(int s);
int print_str(va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);
int print_INT(va_list arg);
int print_percent(void);
int print_binary(va_list arg);
<<<<<<< HEAD
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
=======
int print_Binary(va_list arg);
>>>>>>> 8f0c3561089785787f78557a078f0abea64ecb6c
#endif
