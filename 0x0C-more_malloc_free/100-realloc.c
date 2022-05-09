#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to old memory block
 *@old_size: Old size of memory block
 *@new_size: New size of memory block
 *Return: A pointer to new memory block of NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	int range;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	range = old_size > new_size ? new_size : old_size;
	new_ptr = malloc(new_size);
	if (ptr == NULL && new_ptr != NULL)
		return (new_ptr);
	if (new_ptr != NULL)
		memcpy(new_ptr, ptr, range);
	else
		return (NULL);
	free(ptr);
	return (new_ptr);
}
