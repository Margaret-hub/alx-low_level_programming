#include "main.h"
/**
 * leet - change vowels to numbers.
 * @morph: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *morph)
{
int i, j;
char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char numbers[] = {'4', '3', '0', '7', '1', '\0'};
for (i = 0; morph[i] != '\0'; ++i)
{
for (j = 0; j < 5; j++)
{
if (morph[i] == lower[j] || morph[i] == upper[j])
{
morph[i] = numbers[j];
}
}
}
return (morph);
}
