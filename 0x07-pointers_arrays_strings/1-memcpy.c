#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: source string
 * @src: string for filling
 * @n: length
 * Return: copied string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q = 0;

	while (q < n)
	{
		*(dest + q) = *(src + q);
		q++;
	}
	return (dest);
}
