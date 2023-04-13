#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - print the all arguments followed by a new line.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful.
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
