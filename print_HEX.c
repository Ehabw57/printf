#include "main.h"
int print_HEX(va_list arg)
{
        unsigned int num = va_arg(arg, unsigned int);
        char arr[100];
        int i =0, n;

        if (num == 0)
        {
                _putchar('0' + 0);
                return (1);
        }

        while (num)
        {
                if (num % 16 < 10)
                        arr[i] = (num % 16) + 48;
                else
                        arr[i] = (num % 16) + 55;
                num /= 16;
                i++;
        }

        for (n = i - 1; n >= 0; n--)
                _putchar(arr[n]);
        return (i);
}
