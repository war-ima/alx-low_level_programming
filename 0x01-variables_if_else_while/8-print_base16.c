#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - prints numbers of base 16.
 * Return: 0
 */
int main(void)
{
	char c;
	int num;
	
	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}

