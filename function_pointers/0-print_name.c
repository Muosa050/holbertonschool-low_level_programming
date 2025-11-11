#include "function_pointers.h"

/**
*print_name - send the name via function pointer f
*@f: is the function accept the name and figure it out
*
*@name: the name to be printed
*
*Return: void fun
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
