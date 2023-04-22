#include <stdio.h>
/**
 * main - data entry place
 *
 * Return: main return 0
 */
int main(void)
{
	int digit;
	int comma = 44;
	int space = 32;

	for (digit =  48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit == 57)
		{
			continue;
		}
		putchar(comma);
		putchar(space);
	}
	putchar('\n');
	return (0);
}
