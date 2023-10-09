#include <stdio.h>
#include "dog.h"
/**
 * print-dog - prints information about the dog struct
 * @d: struct
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
