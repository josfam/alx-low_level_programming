#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

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
	int j;
	char *item;
	int item_len;
	int sum;

	/* "0" if no numbers are passed */
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	/* start adding numbers, and stop if a non-number is found */
	for (i = 1; i < argc; i++)
	{
		item = argv[i];
		item_len = strlen(item);

		/* check the string for non-numeric characters*/
		for (j = 0; j < item_len; j++)
		{
			if (!isdigit(item[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(item);
	}

	printf("%d\n", sum);

	return (0);
}
