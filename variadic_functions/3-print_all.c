#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints a character
 * @args: argument list
 * @first: flag to indicate if it's the first argument
 */
void print_char(va_list args, int *first)
{
if (!(*first))
printf(", ");
printf("%c", va_arg(args, int));
*first = 0;
}
/**
 * print_int - prints an integer
 * @args: argument list
 * @first: flag to indicate if it's the first argument
 */
void print_int(va_list args, int *first)
{
if (!(*first))
printf(", ");
printf("%d", va_arg(args, int));
*first = 0;
}
/**
 * print_float - prints a float
 * @args: argument list
 * @first: flag to indicate if it's the first argument
 */
void print_float(va_list args, int *first)
{
if (!(*first))
printf(", ");
printf("%f", va_arg(args, double));
*first = 0;
}
/**
 * print_string - prints a string
 * @args: argument list
 * @first: flag to indicate if it's the first argument
 */
void print_string(va_list args, int *first)
{
char *str;
if (!(*first))
printf(", ");
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
*first = 0;
}
/**
 * print_all - prints anything based on format specifier
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
int first = 1;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
print_char(args, &first);
break;
case 'i':
print_int(args, &first);
break;
case 'f':
print_float(args, &first);
break;
case 's':
print_string(args, &first);
break;
}
i++;
}
va_end(args);
printf("\n");
}
