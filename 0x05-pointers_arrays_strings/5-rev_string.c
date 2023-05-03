#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
int longi = 0;
int o;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (o = longi; o > 0; o--)
{
putchar(*s);
s--;
}
putchar('\n');
}
