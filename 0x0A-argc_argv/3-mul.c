#include <stdio.h>
#include <string.h>

/**
 * main - multipliy two numbers.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful or 1 if no entered numbers.
*/

int main(int argc, char *argv[])
{
int num1;
int num2;
int mul;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 + num2;
printf("%d\n", mul);
return (0);
}
