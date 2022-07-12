#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

int _putchar(char c);
char *_strcpy(char *dest, char *src);
int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _isdigit(int c);
char *_memcpy(char *dest, char  *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
char *_strchr(char *s, char c);
char *_strncpy(char *dest, char *src, int n);
int _islower(int c);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _abs(int num);

#endif /* MAIN_H */