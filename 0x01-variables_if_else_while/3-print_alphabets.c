#include <stdio.h>

/**
 * main - prints upper and lowercase
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	char letters;

	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
