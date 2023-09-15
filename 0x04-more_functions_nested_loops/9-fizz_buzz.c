#include <stdio.h>

/**
 * main -Entry point.
 * Description: Entry point of the program.
 * Return: 0 if successful.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}

		/* Decide when to print the space */
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
