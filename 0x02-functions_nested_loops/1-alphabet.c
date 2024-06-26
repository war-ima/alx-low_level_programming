#include "main.h"
/**
 * main - Entry point
 * print_alphabet - prints alphabet
 * in lowercase
 * Return: 0
 */
void print_alphabet(void)

{
	char small;

	for (small = 'a'; small <= 'z'; 
			small++)
		_putchar(small);
	_putchar('\n');
}
