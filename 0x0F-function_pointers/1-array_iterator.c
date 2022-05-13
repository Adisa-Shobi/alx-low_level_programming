#include <stdlib.h>

/**
 *array_iterator - carries out action on each elemant of an array
 *
 *@array: An array
 *@action: function applied to every elemant
 *@size: Size of the array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
		exit(89);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
