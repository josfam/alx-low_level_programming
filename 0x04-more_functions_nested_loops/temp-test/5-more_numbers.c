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
	int right_num;

	for (rows = 0; rows < 10; rows++)
	{
		/* numbers 0 - 9 */
		for (num = 0; num < 9; num++)
		{
			_putchar('0' + num);
		}

		/* numbers 1011121314 */
		for (right_num = 0; right_num < 5; right_num++)
		{
			_putchar();
		}
	}
	_putchar('\n');
}
