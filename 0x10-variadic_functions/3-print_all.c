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
	int i = 0, len, match;

	va_list ap;

	len = strlen(format);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		match = 0;
		match = print_case(format[i], ap);
		if (i != (len - 1) && match)
		{
			printf("%s", ", ");
		}
		i++;
	}
	printf("\n");
}

/**
 *print_case - checks for each case type and prints accordingly
 *
 *@ap: a va_list type
 *@sample: a string predicting formats of var
 *Return: gives back an integer if there was a match
 */
int print_case(const char sample, va_list ap)
{
	char *sp;

	switch (sample)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			return (1);
		case 'i':
			printf("%d", va_arg(ap, int));
			return (1);
		case 'f':
			printf("%f", va_arg(ap, double));
			return (1);
		case 's':
			sp = va_arg(ap, char *);
			if (sp == NULL)
			{
				printf("(nil)");
			}
			printf("%s", sp);
			return (1);
		}
	return (0);
}
