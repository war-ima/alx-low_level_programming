#include "main.h"
/**
 * _isalpha - checks if upper or lowercase
 * @c: variable checked
 * Return: 1 is upper/lower or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') ||
		(c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}

