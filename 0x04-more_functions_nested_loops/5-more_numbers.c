#include "main.h"

/**
 * more_numbers - Prints, 10 times, the numbers from 0 to 14.
 * Description: Prints, 10 times, the numbers from 0 to 14,
 *				followed by a new line.
 * Return: Nothing.
 */
void more_numbers(void)
{
	int rows;
	int num;

	for (rows = 0; rows < 10; rows++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
