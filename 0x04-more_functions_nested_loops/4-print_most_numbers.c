#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers, 0 to 9 except 2 and 4.
 * Description: Prints the numbers, 0 to 9 except 2 and 4.
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar('0' + num);
	}
	_putchar('\n');
}

