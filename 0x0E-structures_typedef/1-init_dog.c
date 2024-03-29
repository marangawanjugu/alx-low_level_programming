#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - initializes the structure for type dog
 *@d: points to the structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
