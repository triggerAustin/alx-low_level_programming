#include <stdio.h>
#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_;
	char *owner_;

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		name_ = malloc(strlen(name) + 1);
		owner_ = malloc(strlen(owner) + 1);

		if (name_ != NULL && owner_ != NULL)
		{
			strcpy(name_, name);
			strcpy(owner_, owner);
		
			new_dog->name = name_;
			new_dog->age = age;
			new_dog->owner = owner_;
		}

		return (new_dog);
	}
	else
	{
		return (NULL);
	}
}
