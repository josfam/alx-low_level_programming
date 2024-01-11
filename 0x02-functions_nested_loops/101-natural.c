#include "main.h"

/**
 * main - Main entry point of the program
 * Description: Main entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	int result;
	int i;

	result = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* accumulate to the result */
			result = result + i;
		}
	}
	printf("%d\n", result);
	return (0);
}
