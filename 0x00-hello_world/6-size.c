#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Return: - ends file
 */

int main(void)
{

	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li bytes(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));

	return (0);

}
