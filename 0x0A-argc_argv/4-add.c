#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
  * main - it is a program that adds positive numbers
  * @argc : number of arguments
  * @argv : array name
  * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
  */

int main(int argc, char *argv[])
{
int i;
int j;
int length;
int sum;
char *p;
if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
p = argv[i];
length = strlen(p);
for (j = 0; j < length; j++)
{
if (isdigit(*(p + j)) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
