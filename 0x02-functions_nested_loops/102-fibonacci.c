#include <stdio.h>

/**
 * main - Entry point.
 * Description: The main entry point of the program.
 * Return: 0 if successful, Non-zero otherwise.
 */
int main(void)
{
	long long first, second, current, i;
	/* setup and print the first number */
	first = 0;
	second = 1;
	current = first + second;
	printf("%llu, ", current);

	/* print the rest of the numbers */
	for (i = 0; i < 50; i++)
	{
		first = second;
		second = current;
		current = first + second;
		printf("%llu", current);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
