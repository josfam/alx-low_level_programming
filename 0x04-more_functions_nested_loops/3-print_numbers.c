#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 * Description: Prints the numbers, from 0 to 9, followed by a new line.
 * Return: Nothing.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
