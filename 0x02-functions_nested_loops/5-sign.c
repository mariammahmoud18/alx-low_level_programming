#include "main.h"
/**
 * print_sign - checks if a given number is bigger or less than 0.
 *
 * Return: 1 on greater, -1 on less and 0 on zero.
*/
int print_sign(int c)
{
if (n > 0)
{
_putchar('+');
return 1;
}
else if (n < 0)
{
_putchar('-');
return -1;
}
else
{
_putchar('0');
return 0;
}
}

