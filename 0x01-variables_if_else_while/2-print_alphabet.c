#include <stdio.h>
/**
 * main - tThis this the starting point of the prgram
 * Output lowercase altphebets
 * Return: 0 indicating success
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
