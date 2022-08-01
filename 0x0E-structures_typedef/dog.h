#ifndef MAIN_h
#define MAIN_h

/**
 * struct dog-a struct with a dog attribute
 * @name:string
 * @age:float
 * @owner:string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
