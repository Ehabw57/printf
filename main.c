#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
   

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
      _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
       _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
   len =  _printf("test case %% if %s thin %c %c %s %r \n", "string", 'h', 'm', "thisis");
   len2 = printf("test case %% if %s thin %c %c %s %r \n", "string", 'h', 'm', "thisis");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len =  _printf("Unknown:[%r]\n");
    len2= printf("Unknown:[%r]\n");
     _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    len = _printf("%d\n", INT_MAX);
    len2= printf("%d\n", INT_MAX);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%d\n", INT_MIN);
    len2= printf("%d\n", INT_MIN);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%b\n", 98);
    return (0);
}
