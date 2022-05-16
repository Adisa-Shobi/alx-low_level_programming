#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 *print_all - prints a range of data types
 *
 *@format: The format arrangement of parameters
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		print_case(format[i], ap);
		if (still_match((format + i + 1)) && is_match(format[i]))
		{
			printf("%s", ", ");
		}
		i++;
	}
	printf("\n");
}

/**
 *still_match - Checks if there is still a valid data type left
 *
 *@rem: remaining characters in string format
 *Return: An integer representing true or false
 */
int still_match(const char *rem)
{
	if (*rem == '\0')
		return (0);
	if (*rem == 'c' || *rem == 'i' || *rem == 'f' || *rem == 's')
		return (1);
	else
		return (still_match(rem + 1));
}

/**
 *is_match - checks if the letter specified is a valid data type
 *@c: A character
 *Return: An integer
 */
int is_match(char c)
{
	if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		return (1);
	return (0);
}

/**
 *print_case - checks for each case type and prints accordingly
 *
 *@ap: a va_list type
 *@sample: a string predicting formats of var
 *Return: gives back an integer if there was a match
 */
void print_case(const char sample, va_list ap)
{
	char *sp;

	switch (sample)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			sp = va_arg(ap, char *);
			if (sp == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", sp);
			break;
		}
}
