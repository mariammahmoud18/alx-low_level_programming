#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - print the name of the file followed by a new line.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful.
*/

int main(int argc, char *argv[])
{
    printf("./%s\n", argv[0]);
    return (0);
}
