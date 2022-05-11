#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - Creates a new dog
 *@name: The name of the dog
 *@age: The age of the dog
 *@owner: The owner of the dog
 *Return: an object of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	char *name_copy, *owner_copy;

	name_copy = malloc((sizeof(*name_copy) * strlen(name)) + 1);
	owner_copy = malloc((sizeof(*owner_copy) * strlen(owner)) + 1);
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog != NULL)
	{
		(*my_dog).name = name;
		(*my_dog).age = age;
		(*my_dog).owner = owner;
	}
	else
		return (NULL);
	return (my_dog);
}
