#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* Helper functions */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
printf("%f", (double)va_arg(args, double));
}

void print_string(va_list args)
{
char *s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: SUCCESS
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0, printed = 0;
char types[] = "cifs";
void (*funcs[])(va_list) = {
print_char, print_int, print_float, print_string
};
va_start(args, format);
while (format && format[i])    /* 1st while */
{
j = 0;
while (types[j])              /* 2nd while */
{
/* ---- 1st if ---- */
if (format[i] == types[j])
{
/* ---- 2nd if ---- */
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
