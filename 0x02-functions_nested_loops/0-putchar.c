#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: The entry point for this program.
 *
 * Return: 0 if successful. Non-zero otherwise.
 */
int main(void)
{
	write(1, "_putchar\n", strlen("_putchar\n"));
	return (0);
}

