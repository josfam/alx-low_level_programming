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
	int first_num;
	int second_num;

	/* Print Error if arguments are incorrect */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = atoi(argv[1]);
	second_num = atoi(argv[2]);

	printf("%d\n", first_num * second_num);

	return (0);
}
