#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 *@s1: String 1
 *@s2: String 2
 *Return: retuns a pointer or NULL(if failed)
 */
char *str_concat(char *s1, char *s2)
{
	char *merged;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	merged = malloc(sizeof(*merged) * (strlen(s1) + strlen(s2) + 1));
	if (merged != NULL)
	{
		if (s1)
			concat(merged, s1);
		if (s2)
			concat(merged, s2);
	}
	else
	{
		free(merged);
		return (NULL);
	}
	return (merged);
}

/**
 *concat - concatenates a string to ptr
 *@ptr: The string to be added to
 *@s: The string being added
 *Return: A pointer to ptr
 */
char *concat(char *ptr, char *s)
{
	int i = 0, j = 0;

	while (ptr[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		ptr[i + j] = s[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
