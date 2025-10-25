#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: input string
 * Return: converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign = sign * -1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
started = 1;
}
else if (started == 1)
break;
i++;
}
return (result *sign);
}
