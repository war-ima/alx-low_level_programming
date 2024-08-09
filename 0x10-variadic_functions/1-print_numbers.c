#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by new line
* @separator: string to be printed between numbers
* @n: number of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int t;
va_list list;

va_start(list, n);

for (t = 0; t < n; t++)
{
if (!separator)
printf("%d", va_arg(list, int));
else if (separator && t == 0)
printf("%d", va_arg(list, int));
else
printf("%s%d", separator, va_arg(list, int));
}

va_end(list);

printf("\n");
}
