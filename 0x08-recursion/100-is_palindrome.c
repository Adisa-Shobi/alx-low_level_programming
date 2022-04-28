#include "main.h"
#include "./2-strlen_recursion.c"

/**
 *is_palindrome - checks if a word reads the same way when reversed
 *
 *@s: string
 *Return: int
 */
int is_palindrome(char *s)
{
	return (palindrome(s, (_strlen_recursion(s) - 1), 0));
}

/**
 *palindrome - checks if word is palindrome
 *
 *@s: string
 *@n: Length of s
 *i: index
 *Return: 1 if palindrome and 0 if not
 */
int palindrome(char *s, int n, int i)
{
	if (s[i] != s[n])
		return (0);
	if (i == n || i + 1 == n)
		return (1);
	return (palindrome(s, n - 1, i + 1));
}
