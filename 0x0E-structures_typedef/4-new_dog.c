#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string type, name of dog
 * @age: float type, age of dog
 * @owner:char string type, owner of the dog
 * Return: pointer to struct dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j, k;
	char *n, *o;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * (i + 1));
	if (n == NULL)
	{
		free(newdog);
		return (NULL);
	}
	o = malloc(sizeof(char) * (i + 1));
	if (o == NULL)
	{
		free(n);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		n[k] = name[k];
	n[k] = '\0';
	newdog->name = n;
	newdog->age = age;
	for (k = 0; k < j; k++)
		o[k] = owner[k];
	o[k] = '\0';
	newdog->owner = o;
	return (newdog);
}
