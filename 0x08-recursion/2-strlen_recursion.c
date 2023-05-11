#include "main.h"
/**
 * _strlen_recursion - Recursively calculates the length of a string.
 * @s: The string to be measured.
 *
 * This function takes a string and recursively calculates its length.
 * It works by incrementing a counter for each character in the string,
 * and then recursively calling itself with the next character in the string
 * until it reaches the end of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
/* Increment the counter for each character in the string */
count++;

/* Recursively call the function with the next character in the string */
count += _strlen_recursion(s + 1);
}

return (count);
}
