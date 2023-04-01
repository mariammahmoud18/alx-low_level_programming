#include <stdio.h>
/**
* main - print from 0 to 9 using putchar.
* Return: 0 if succesful
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i == 9)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
return (0);
}
