#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
struct dog
{
	char *name;
	float age;
	char *owner;
};
*/
/**
 * struct dog_t - struct for a dog
 * @name: name for dog
 * @age: age for dog
 * @owner: name of owner
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
