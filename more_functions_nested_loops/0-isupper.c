#include "main.h"

/**
*_isupper -  check the leter upercase
*
*@c:  is the leter ASCI
*
*Return: (1) if it's upper (0) if it lower
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
