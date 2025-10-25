#include "main.h"

/**
*swap_int - function swap the value between a & b
*
*@a: first value
*@b: second value to be swaped
*
*Return: void fun
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
