#include <stdio.h>

/**
 * main- prints numbers from 0 to 9
 *
 * Return: 0
 */

int main(void)
{

	char n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
