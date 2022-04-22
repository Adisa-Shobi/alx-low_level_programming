#include "main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"

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
	else if (len_s2 < len_s1)
		return (15);
	else if (len_s2 == len_s1)
		return (0);
	return (0);
}
