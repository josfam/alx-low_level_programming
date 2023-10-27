#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: The main entry point of the program.
 * Return: 0 if successful, Non-zero otherwise.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

