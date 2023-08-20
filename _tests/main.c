#include "main.h"
#include <stdio.h>
void main()
{
    int len;
    int len2;
    int l1 = 0, l2 = 0;
    unsigned int ui;
    void *addr;

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    len = printf("this is a num[%i]\n", 1232132);
    len2 = _printf("this is a num[%i]\n", 1232132);
    printf("and it's lenth is [%i]\n",len);
    _printf("and it's lenth is [%i]\n",len2);
}