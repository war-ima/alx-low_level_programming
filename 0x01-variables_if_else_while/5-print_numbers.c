#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints numbers 1 to 9
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
