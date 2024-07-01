#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * followed by new line
 */
void puts_half(char *str)
{
	int length, s, r;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (s = length / 2; str[s] != '\0'; s++)
		{
			_putchar(str[s]);
		}
	} else if (length % 2)
	{
		for (r = (length - 1) / 2; r < length - 1; r++)
		{
			_putchar(str[r + 1]);
		}
	}
	_putchar('\n');
}
