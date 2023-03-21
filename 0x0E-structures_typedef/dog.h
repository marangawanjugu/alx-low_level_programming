#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>

/**
 * struct dog - structure of dog
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
