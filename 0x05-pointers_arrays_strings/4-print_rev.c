#include "main.h"
/**
* print_rev - prints string reversed
* @s: string to be reversed
*/
void print_rev(char *s)
{
int p, q, length;

p = 0;

while (s[p] != '\0')
{
p++;
}

length = p;

for (q = length - 1; q >= 0; q--)
{
_putchar(s[q]);
}
_putchar('\n');
}
