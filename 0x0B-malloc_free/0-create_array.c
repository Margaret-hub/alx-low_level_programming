#include "main.h"
#include<stdlib.h>

/**
 * create_array - function that an array of characters
 * @size: size of the array
 * @c: character to initialize the array
 * Return: pointer to array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(sizeof(char) * size);
if (size == 0 || arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
