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

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
