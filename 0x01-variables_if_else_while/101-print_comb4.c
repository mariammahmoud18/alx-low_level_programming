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
int n = 48;

for (int i = 48; i <= 57; i++)
{
for (int j = i + 1; j <= 57; j++)
{
for (int k = j + 1; k <= 57; k++)
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
