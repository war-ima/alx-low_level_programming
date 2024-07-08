#include "main.h"

/**
  * _strchr - finds character in string
  * @s: source string
  * @c: character being looked for.
  * Return: string
  */
char *_strchr(char *s, char c)
{
	int q;

	for (q = 0; s[q] >= '\0'; q++)
	{
	if (s[q] == c)
	return (s + q);
	}
	return (0);
}
