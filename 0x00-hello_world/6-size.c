#include <stdio.h>

/**
 *main -Entry point
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of char: %2d \n", sizeof(char));
	printf("Size of int: %2d \n", sizeof(int));
	printf("Size of long int: %2d \n", sizeof(long int));
	printf("Size of long long int: %2d \n", sizeof(long long int));
	printf("Size of float: %2d \n", sizeof(float));

	return (0);
}
