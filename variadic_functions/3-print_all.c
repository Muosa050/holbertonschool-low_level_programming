#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: SUCCESS
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
if (printed)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
printed = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
printed = 1;
break;
case 'f':
printf("%f", (double)va_arg(args, double));
printed = 1;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
printed = 1;
break;
default:
printed = printed;
}
i++;
}
printf("\n");
va_end(args);
}
