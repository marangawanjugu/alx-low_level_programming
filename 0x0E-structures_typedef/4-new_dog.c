#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Return: int value
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type  pointer
 * @src: char type pointer
 * Return: a char value
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggie;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_doggie = malloc(sizeof(dog_t));/*allocate memory for a new dog_t struct*/
	if (new_doggie == NULL)
		return (NULL);
	new_doggie->name = malloc(_strlen(name) + 1);
	if (new_doggie->name == NULL)
	{
		free(new_doggie);
		return (NULL);
	}
	_strcpy(new_doggie->name, name);
	new_doggie->age = age;
	new_doggie->owner = malloc(_strlen(owner) + 1);
	if (new_doggie->owner == NULL)
	{
		free(new_doggie->name);
		free(new_doggie);
		return (NULL);
	}
	_strcpy(new_doggie->owner, owner);
	return (new_doggie);
}
