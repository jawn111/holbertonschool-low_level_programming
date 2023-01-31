#include "holberton.h"
/**
 * print_sign - function to print sign of a number
 * @n: First parameter
 * Return: 1 and prints + if n > 0, ret 0/print0 if n = 0, ret -1/prnt- in n < 0
 */

int print_sign(int n)
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
			{
				_putchar('0');
				return (0);
			}
			else
				{
					_putchar('-');
					return (-1);
				}
				return (n);
}
