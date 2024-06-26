#include <stdio.h>
/**
*main - prints multiples of 3 and 5
*excludes 1024.
*Return: 0
*/

int main(void)
{
	int l, sum = 0;

	for (l = 0; l < 1024; l++)
	{
		if ((l % 3) == 0 || (l % 5) == 0)
			sum += l;
	}

	printf("%d\n", sum);

	return (0);
}
