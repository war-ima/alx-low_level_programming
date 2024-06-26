#include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10 - prints alphabet
 * ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char small;

	while (count > 10)
	{
	for (small = 'a'; small <= 'z'; small++)
		_putchar(small);
	_putchar('\n');
	}
}
