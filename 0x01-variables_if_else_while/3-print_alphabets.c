#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lw = 97;
	int up = 65;

	while (lw <= 122)
	{
		putchar(lw);
		lw++;
	}
	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
