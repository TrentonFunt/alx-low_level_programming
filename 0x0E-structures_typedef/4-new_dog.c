#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: A pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_name = strdup(name);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
