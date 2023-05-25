#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - that prints strings, followed by a new line.
 * @n: number
 * @separator: string
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int j;
char *s;
va_list str;
va_start(str, n);
for (j = 0; j < n; j++)
{
s = va_arg(str, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (j != (n - 1) && separator != NULL)
printf("%s", separator);	}
printf("\n");
va_end(str);
}
