#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int a = 32;
	int a = 64;

	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(float));
	return (0);
}
