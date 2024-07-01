#include "main.h"
/**
* puts2 - prints 2nd character
* @str: string where character
* is printed
* followed by new line
*/
void puts2(char *str)
{
int length, n;

length = 0;

while (str[length] != '\0')
{
length++;
}

for (n = 0; n < length; n += 2)
{
_putchar(str[n]);
}

_putchar('\n');
}
