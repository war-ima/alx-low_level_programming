#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Prints with space and comma
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n !=  9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

