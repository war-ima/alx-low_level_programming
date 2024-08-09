#include "variadic_functions.h"

/**
* sum_them_all - calculates the sum of all parameters
* @n: number of arguments
*
* Return: the resulting sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int t;
int sum = 0;
va_list list;

va_start(list, n);

for (t = 0; t < n; t++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
