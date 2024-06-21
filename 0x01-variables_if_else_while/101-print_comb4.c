#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;
	int n;

	for (n = 0; n < 1000; n++)
	{
		hundreds = n / 100;
		tens = (n / 10) % 10;
		ones = n % 10;

		if (hundreds < tens && tens < ones)
		{
			putchar(hundreds + '0');
			putchar(tens + '0');
			putchar(ones + '0');

			if (n < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
