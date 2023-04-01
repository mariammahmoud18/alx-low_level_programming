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

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
