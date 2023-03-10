#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to check
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
	}
	else
	{
		num = n % 10;
	}
	_putchar(num + '0');
	return (num);
}
