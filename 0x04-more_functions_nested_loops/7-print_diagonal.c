#include "main.h"

/**
 * print_diagonal - Draws a diagonal line with the character '\'
 * @n: The number of times the character is to be printed.
 */

void print_diagonal(int n)

{
int len, space;

if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
putchar(' ');
putchar('\\');

if (len == n - 1)
continue;

putchar('\n');
}
}
}
