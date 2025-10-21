#include "main.h"

/**
*_isdigit - function that check is d digit from 0-9
*
*@d : varibale int contain the value
*
*Return: (1) for digit , (0) if it's not
*/

int _isdigit(int d)
{
if (d >= '0' && d <= '9')
return (1);
else
return (0);
}
