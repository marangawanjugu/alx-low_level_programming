#ifndef DOG_H
#define DOG_H

/**
 *struct dog - data of a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);*/

#endif
