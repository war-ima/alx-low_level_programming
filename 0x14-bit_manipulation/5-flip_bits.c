#include "main.h"
#include <stdio.h>

/**
 * flip_bits - number of bits need to convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
