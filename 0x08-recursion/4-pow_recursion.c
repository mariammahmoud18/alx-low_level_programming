#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _pow_recursion - calculates the value of x raised to power of y.
 * @x: number to be powered.
 * @y: power num.
 * Return: x power y.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (x == 1 || y == 0)
return (1);
return (x * _pow_recursion(x, y-1));
}
