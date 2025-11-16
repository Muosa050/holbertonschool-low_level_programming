#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 *
 * Return: The total sum of the parameters. Returns 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, result = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n; i++)
result += va_arg(ap, unsigned int);
va_end(ap);
return (result);
}
