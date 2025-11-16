#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of argument types
 *
 * Return: SUCCESS
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0, printed = 0;
char *str;
char types[] = "cifs";
va_start(args, format);
while (format && format[i])
{
j = 0;
while (types[j])
{
if (format[i] == types[j])
{
if (printed)
printf(", ");
if (types[j] == 'c')
printf("%c", va_arg(args, int));
if (types[j] == 'i')
printf("%d", va_arg(args, int));
if (types[j] == 'f')
printf("%f", (double)va_arg(args, double));
if (types[j] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
if (str)
printf("%s", str);
}
printed = 1;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
