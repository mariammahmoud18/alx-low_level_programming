#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - multipliy two numbers.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful or 1 if no entered numbers.
*/

int main(int argc, char *argv[])
{
if (argc <= 2)
{
printf("Error\n");
return (1);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int sum = num1 * num2;

printf("%d\n", sum);
return (0);
}
