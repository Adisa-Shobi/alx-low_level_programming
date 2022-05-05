#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - creates new allocated mem space with a copy of a str in it.
 *@str: A string
 *
 *Return: A pointer to the memspace of NULL if unsuccessful
 */
char *_strdup(char *str)
{
	int len, i = 0;

	char *new;

	len = strlen(str);
	new = malloc(sizeof(new) * len);
	if (new == NULL || !len)
	{
		free(new);
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			new[i] = str[i];
			i++;
		}
	}
	return (new);
}
