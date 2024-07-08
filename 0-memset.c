#include "main.h"
/**
 * _memset - main function to fill with constant byte.
 * @s:string
 * @b:contant byte for filling
 * @n:length of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	s[l] = b;
	return (s);
}
