#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: The main entry point of the program.
 * Return: 0 if successful, Non-zero otherwise.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	char *name = argv[0];

	printf("%s\n", name);

	return (0);
}

