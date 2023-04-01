#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all alphabet letters in lowercase.
 *
 * Return: Always 0.
*/
int main(void)
{
int i;
int j;
int k;

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (k = j + 1; k <= 57; k++)
{
putchar((char)i);
putchar((char)j);
putchar((char)k);
if (i == '7' && j == '8' && k == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
