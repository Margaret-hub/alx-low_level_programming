#include "function_pointers.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name: name of the person
 * @f: pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
