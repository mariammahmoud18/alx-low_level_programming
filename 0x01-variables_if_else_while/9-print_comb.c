#include <stdio.h>
/**
* main - print from 0 to 9 using putchar.
* Return: 0 if succesful
*/
int main(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
if (i == '9')
{
putchar(i);
break;
}
putchar(i);
putchar(',');
putchar(' ');
}
return (0);
}
