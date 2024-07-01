#include "main.h"
/**
 * _strlen - evaluates string length
 * Return: length of string
 * @s: string to evaluate
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
