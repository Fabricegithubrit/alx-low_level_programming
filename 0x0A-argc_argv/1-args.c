#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char **argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
