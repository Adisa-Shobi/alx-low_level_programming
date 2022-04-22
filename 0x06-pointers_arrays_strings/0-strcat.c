#include "main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"

/**
 *_strcat - concatenates two strings
 *
 *@dest: destination string
 *@src: source of the string
 *Return: An array of charachters concatenating dest and src
 */
char *_strcat(char *dest, char *src)
{
	int len_src, len_dest, i;

	len_src = _strlen(src);
	len_dest = _strlen(dest);
	for (i = 0 ; i <= len_src ; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
