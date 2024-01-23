#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_dog - frees dogs
 *@d: pointer to structure
 *
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
