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
if (i == 9)
{
putchar(i + '0');
break;
}
putchar(i + '0');
putchar(',');
putchar(' ');
}
return (0);
}
