#include "search_algos.h"

/**
 *binary_search - searches an array using binary search algorithm
 *
 *@array: The array being searched
 *@size: The size of the array being searched
 *@value: The value being searched for
 *Return: returns the index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;

	if (!array)
		return (-1);

	while (L <= R)
	{
		print_array(array, L, R);
		m = ((L + R) - ((L + R) % 2)) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 *print_array - custom print function for printing an array
 *
 *@array: The array to print from
 *@index: The start index of the list
 *@boundary: The end index of the array
 *Return: void
 */
void print_array(int *array, size_t index, size_t boundary)
{
	printf("Searching in array: ");
	while (index <= boundary)
	{
		printf("%d", array[index]);
		if (index != boundary)
			printf(", ");
		else
			printf("\n");
		index++;
	}
}
