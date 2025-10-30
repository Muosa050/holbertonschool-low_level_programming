#include "main.h"

/*
*_strlen_recursion - figure out legnth of string
*
*@s: is the string
*
*Return: i the legnth
*/
int _c(char *n , int x)
{
if (n[x] == '\0')
{
return (x);
}

return _c(n , x + 1);

}
int _strlen_recursion(char *s)
{
int i ;
int temp = 0;
char *c = s;
i = _c(c , temp);
return (i);
}
