#include  "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
