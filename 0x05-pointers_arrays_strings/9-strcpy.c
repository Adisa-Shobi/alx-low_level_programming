#include "main.h"
#include "2-strlen.c"

/**
 *_strcpy - copies one string to another
 *
 *@dest: The destination string
 *@src: The source string
 *Return: The destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len  = _strlen(dest);
	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
