#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The entry point for this program.
 *
 * Return: 0 if successful. Non-zero otherwise.
 */
int main(void)
{
	int i;

	/* for the lowercase letters */
	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	/* for the upper letters */
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
