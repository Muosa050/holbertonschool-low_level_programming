#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, printed = 0;
char *str;
char c;

va_start(args, format);

while (format && format[i])
{
c = format[i];
if (c == 'c' || c == 'i' || c == 'f' || c == 's')
{
if (printed)
printf(", ");
if (c == 'c')
printf("%c", va_arg(args, int));
if (c == 'i')
printf("%d", va_arg(args, int));
if (c == 'f')
printf("%f", (double)va_arg(args, double));
if (c == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
printed = 1;
}
i++;
}

printf("\n");
va_end(args);
}
