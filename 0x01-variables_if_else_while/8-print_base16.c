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

	/* for the numbers */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	/* for the letters */
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
