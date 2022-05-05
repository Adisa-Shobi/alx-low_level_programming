#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of char and initializes it with a char
 *@size: Size of array
 *@c: Initialized char
 *Return: A pointer if malloc is successful, 0 if not
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	array = malloc(size);
	if (array == NULL || size == 0)
	{
		free(array);
		return (NULL);
	}
	while (i <= size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
