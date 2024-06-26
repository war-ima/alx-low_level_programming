#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: variable checked for sign
 * Return: 1 if positive,
 * 1 if negative and 0 if equal.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
