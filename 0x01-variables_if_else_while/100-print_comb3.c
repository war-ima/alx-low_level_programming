#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combination of all two digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = 0;
	int tens;
	int ones;

	while (n <= 99)
	{
		tens = n % 10;
		ones = n / 10;

		if (ones < tens)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
