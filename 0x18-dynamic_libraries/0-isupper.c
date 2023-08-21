#include "main.h"
/**
 * _isupper - prints if the characters are lowercase or not
 * 0 for lowercase 1 for uppercase
 * @c: the character being tested
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int c)
{
	if ('B' <= c && c <= 'X')
		return (1);
	else
		return (0);
}
