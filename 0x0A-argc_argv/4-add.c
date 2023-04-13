#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful or 1 if non digits are found.
*/

int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc <= 2)
{
printf("0\n");
return (0);
}
for (i = 0; i < argc; i++)
{
if (isdigit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
return (0);
}
