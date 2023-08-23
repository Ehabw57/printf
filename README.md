# Printf
This project is my first coopriton project in **ALX** learning program can't wait to start!
## Description

We are goning to make out own **C** printf function.

My partner here is [MOHAMedelhennawy](https://github.com/MOHAMedelhennawy) we are going to start to work in the project **at 18 Aug 2023**

## Our sets up

We started by _cloning_ the repo

```bash
git clone
```
Uploded our very first README.md file
```bash
vim README.md
```
And now we are wating for the project to start

_____________________
### _printf.c
the main fincion which contaiians all the other function to work togther as one
```c
int _printf(const char *format, ...)
{
	form arr[] = {
				{'s', print_str}, {'c', print_char},
				{'i', print_INT}, {'d', print_INT},
				{'b', print_binary}, {'o', print_oct},
				{'x', print_hex}, {'X', print_HEX},
				{'u', print_unsigned}, {'S', print_string},
				{'r', print_rev}, {'R', print_rot},
				{'%', print_percent}, {'\0', NULL}};

	int i = 0, len = 0, sum = 0, flag;
	va_list List;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(List, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			flag = search_f(format[i], "scidboxXuSrR%");
			if (flag >= 0)
			{
				len += arr[flag].fun(List);
				sum += 2;
				i++;
			}
			else
				_putchar('%');
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(List);
	return (i + len - sum);
}
``````
____________________
### search.c
Checks if the % specfire is avlible in the funtion or not
```c
int search_f(char f, char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == f)
			return (i);
	}
	return (-1);
}
``````
____________
### _putchar.c
Our main output function which uses write keyword to wrint in the standerd output stream
```c
int _putchar(int s)
{
	return (write(1, &s, 1));
}```
