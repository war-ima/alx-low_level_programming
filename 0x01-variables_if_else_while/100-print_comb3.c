#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
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
