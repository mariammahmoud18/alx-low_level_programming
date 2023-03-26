#include "main.h"
/**
 * jack_bauer - prints out all times of the day.
 * 
 * Return: 1 if successfuly.
*/
void jack_bauer(void)
{
for (int i = 0; i <= 2; i++)
{
for (int j = 0; j <= 9 ; j++)
{
for (int k = 0; k <= 5; k++)
{
for (int m = 0; m <= 9; m++)
{
if (i == 2 && j > 3)
break;
putchar(i + '0');
putchar(j + '0');
putchar(':');
putchar(k + '0');
putchar(m + '0');
putchar('\n');
}
}
}
}
}
