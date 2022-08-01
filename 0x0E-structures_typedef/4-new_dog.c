#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog-creates a dog
 * @name:string
 * @age:float
 * @owner:string
 * Return:pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
