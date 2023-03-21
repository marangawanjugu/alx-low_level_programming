#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees the dog
 * @d: ponter to dog struct
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
