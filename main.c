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
    unsigned int ui;   
	
    ui = (unsigned int)INT_MAX + 1024;
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
   len =  _printf("%b\n", 98);
   len2 = printf("%b\n", 98);
   _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
     _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
     _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); 
     _printf("Unsigned hexadecimal:[%x]\n", ui);
    printf("Unsigned hexadecimal:[%x]\n", ui);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned:[%u]\n", -19);
    printf("Unsigned:[%u]\n", -19);
     len = _printf("%S\n", "Best\nSchool");
     _printf("Len:[%d]\n", len);
  len =  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len =  _printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
   len2 = printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
   _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%u\n", 23);
    printf("%u\n", 23);
    _printf("%u\n", 1);
    printf("%u\n", 1);
    _printf("%u\n", -34);
    printf("%u\n", -34);
    _printf("%u\n", -1);
    printf("%u\n", -1);
    _printf("%u\n", INT_MAX);
    printf("%u\n", INT_MAX);
    _printf("%u\n", INT_MIN);
    printf("%u\n", INT_MIN);
     len =  _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
