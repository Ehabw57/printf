#include "main.h"

int search_f(char f, char *c)
{
    int i;

    if (f == *c)
    {
        return 0;
    }

    else
    {
        for (i = 0; c[i] != '\0'; i++)
        {
            if (c[i] == f)
            {
                return 0;
            }
        }
    }
    return 1;
}
