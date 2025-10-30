#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to print in reverse.
 *
 * Description: This function uses recursion to reach the end of the string
 * first, then prints characters on the way back up the call stack.
 * Base case: when *s == '\0', return without printing anything.
 * Recursive case: call function with next character, then print.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
