#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a variable type of struct dog is initialized
 * @d: inputed pointer to srtuct dog to be initialized
 * @name: inputed name to be initialized
 * @age: inputed age to be initialized
 * @owner: inputed owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
