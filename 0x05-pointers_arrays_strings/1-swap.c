#include <stdio.h>

/**
 * swap_int - swaps the values of two intergers
 * @a: the first interger to be swapped
 * @b: the second interger to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
