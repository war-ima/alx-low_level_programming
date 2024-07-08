#include "main.h"

/**
  * _strstr - function that locates a substring
  * @needle: source string
  * @haystack: function parameter
  * Return: new string
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}

