#include "main.h"
#include "stdlib.h"
#include <string.h>

/**
 *argstostr - Converts arguments to sting
 *@ac: Argument count
 *@av: Argument vaector
 *
 *Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	char *str;

	int i, len = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (j < ac)
	{
		len += strlen(av[j]);
		j++;
	}

	str = malloc((sizeof(*str) * len) + ac + 1);
	if (str != NULL)
	{
		for (i = 0 ; i < ac ; i++)
			concat(str, av[i]);
	}
	else
	{
		return (NULL);
	}
	return (str);
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
	ptr[i + j] = '\n';
	ptr[i + j + 1] = '\0';
	return (ptr);
}
