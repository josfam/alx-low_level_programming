#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: The main entry point of the program.
 * Return: 0 if successful, Non-zero otherwise.
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int cents_left;
	int coins_used;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins_used = 0;
	cents_left = cents;

	for (i = 0; i < 5; i++)
	{
		int value = values[i];

		/* divide by the current coin value */
		coins_used += cents_left / value;

		/* you are done if there are no cents left */
		if (cents_left % value == 0)
			break;

		cents_left %= value;
	}

	printf("%d\n", coins_used);

	return (0);
}
