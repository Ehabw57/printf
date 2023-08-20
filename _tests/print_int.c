#include "main.h"
void reprint(int i, int last, int *count)
{
    
    if (i == 0)
    return ;

    last = i % 10;
    i /= 10;
  reprint(i, last, count);
    _putchar('0' + last);
    (*count)++;

}

int print_int(va_list arg)
{
    int i = 0, count = 0;

    i = va_arg(arg, int);
  reprint(i, 0, &count);
  return (count);
}