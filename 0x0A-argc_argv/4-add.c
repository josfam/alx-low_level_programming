#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int containsSymbols(int argc, char **argv);
int getSum(int argc, char **argv);

/**
 * main - Entry point.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: The main entry point of the program.
 * Return: 0 if successful, Non-zero otherwise.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	/* Handle no number being passed */
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		if (containsSymbols(argc, argv))
		{
			printf("Error\n");
			return (1);
		}
		/* Get the sum of the numbers */
		printf("%d\n", getSum(argc, argv));
	}

	return (0);
}

/**
 * containsSymbols - Checks whether any of the commandline options contains
 * a non-numeric symbol.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: Checks whether any of the commandline options contains
 * a non-numeric symbol
 * Return: 0 if there are no non-numeric symbols found, 1 otherwise.
 */
int containsSymbols(int argc, char **argv)
{
	int i, j, strLen;
	char symbol;

	for (i = 1; i < argc; i++)
	{
		strLen = strlen(argv[i]);
		for (j = 0; j < strLen; j++)
		{
			symbol = argv[i][j];
			if (symbol < 48 || symbol > 57)
			{
				return (1);
			}
		}
	}

	return (0);
}

/**
 * getSum - Returns the sum of the numbers passed as commandline arguments.
 * @argc: Length of array of commandline arguments.
 * @argv: Array of commandline arguments.
 * Description: Returns the sum of the numbers passed as commandline arguments.
 * Return: The sum of the numbers passed as commandline arguments.
 */
int getSum(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	return (sum);
}
