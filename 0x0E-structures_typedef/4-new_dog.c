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
	dog_t *d;
	char *n;
	char *o;

	n = malloc(sizeof(n));
	o = malloc(sizeof(o));
	d = malloc(sizeof(dog_t));
	n = name;
	o = owner;

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
