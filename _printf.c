#include "main.h"

int _printf(const char *format, ...)
{
    va_list List;
    int i = 0, j;

    va_start(List, format);
    while (format != NULL && format[i] != '\0')
    {
        
        if (format[i] == '%')
        {

        }
        _putchar(format[i]);
        i++;
    }

    va_end(List);
}