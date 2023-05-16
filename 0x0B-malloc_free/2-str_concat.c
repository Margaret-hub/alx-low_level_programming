#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, ab;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = ab = 0;
while (s1[i] != '\0')
i++;
while (s2[ab] != '\0')
ab++;
concat = malloc(sizeof(char) * (i + ab + 1));
if (concat == NULL)
return (NULL);
i = ab = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[ab] != '\0')
{
concat[i] = s2[ab];
i++, ab++;
}
concat[i] = '\0';
return (concat);
}
