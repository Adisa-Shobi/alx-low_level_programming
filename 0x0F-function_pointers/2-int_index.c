#include <stdlib.h>

/**
 *int_index - searches for an integer
 *
 *@array: Array being searched
 *@size: Size of array
 *@cmp: Compare function
 *Return: first integer relating to first non zero returned by cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
