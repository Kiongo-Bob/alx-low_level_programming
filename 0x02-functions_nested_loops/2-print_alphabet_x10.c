#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: always (0) success
 *
 */

void print_alphabet_x10(void)
{
	int num;
	int ch;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
