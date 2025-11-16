#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: argument list
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: argument list
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument list
 */
void print_float(va_list args)
{
printf("%f", (double)va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: argument list
 */
void print_string(va_list args)
{
char *s = va_arg(args, char *);
const char *map[2];

map[0] = s;
map[1] = "(nil)";
printf("%s", map[s == NULL]);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0, printed = 0;
char types[] = "cifs";
void (*funcs[])(va_list) = {print_char, print_int, print_float, print_string};

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

funcs[j](args);
printed = 1;
}
j++;
}
i++;
}

printf("\n");
va_end(args);
}
