#include "dog.h"
#include <stdio.h>
/**
 * init_dog-ititializes a variable of type dog
 * @d:pointer
 * @name:string
 * @age:float
 * @owner:string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
