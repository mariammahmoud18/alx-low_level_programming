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
char c = 97;
char c2 = 65;
while (c <= 122)
{
putchar(c);
c++;
}
while (c2 <= 90)
{
putchar(c2);
c2++;
}
putchar('\n');
return (0);
}
