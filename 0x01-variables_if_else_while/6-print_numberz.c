#include <stdio.h>

/**
 * main - | starts file
 * Return: - | ends file
 */

int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{

		putchar((i % 10) + '0');

	}

	putchar('\n');

	return (0);

}
