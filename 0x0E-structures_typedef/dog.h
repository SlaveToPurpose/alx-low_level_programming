#ifndef DOG_H
#define DOG_H

/**
 *struct dog - contains info for poppy the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for new struct dog_t
 */

typedef struct dog dog_t;

#endif /*DOG_H*/
