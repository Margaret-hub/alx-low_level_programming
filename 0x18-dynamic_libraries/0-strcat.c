#include "main.h"
/**
* *_strcat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* Return: returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int c, d;

	for (c = 0; dest[c] != '\0'; c++)
		;
	for (d = 0; src[d] != '\0'; d++)
	{
		dest[c + d] = src[d];
	}
	dest[c + d] = '\0';
	return (dest);
}
