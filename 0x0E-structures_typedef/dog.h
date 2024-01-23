#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data of a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Description: Holds the dog data and outlines the type of dog's struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
