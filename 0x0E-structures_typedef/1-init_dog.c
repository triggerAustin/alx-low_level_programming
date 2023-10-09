#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the struct dog
 * @d: initializes dog to *d
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct d));

	if (d != NULL)
	{
		if (d->name != NULL || d->age >= 0 || d->owner != NULL)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
	}
}
