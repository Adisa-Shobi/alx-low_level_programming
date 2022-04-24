#include "main.h"

/**
 *_strcmp - Compares two strings
 *
 *@s1: Frist string
 *@s2: Second string
 *Return: -15 if s1 is less 0 if the same , and 15 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (len_s2 > len_s1)
		return (-15);
	else if (len_s2 == len_s1)
		return (0);
	else
		return (15);
	return (0);
}

/**
 *_strlen - returns the length of a string
 *
 *@s: string
 *Return: int(lenght of s)
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
