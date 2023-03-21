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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
