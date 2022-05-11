#include "dog.h"
#include <stdlib.h>

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
