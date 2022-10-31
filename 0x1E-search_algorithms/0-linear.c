#include "search_algos.h"

/**
 *linear_search - function searches for a value in array using linear
 * search algoritm
 *
 *@array: the array is to be searched through
 *@size: The size of the array being searched
 *@value: The value being searched for
 *Return: retuens the firat index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
