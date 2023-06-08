#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: return place
 */
int get_bit(unsigned long int n, unsigned int index)
{
int place;
unsigned int get_bit;
	get_bit	= (sizeof(unsigned long int) * 8);
	if (index >= get_bit)
	return (-1);
	place = ((n >> index) & 1);
	return (place);
}
