#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: The entry point for this program.
 *
 * Return: 0 if successful. Non-zero otherwise.
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_num = n % 10;
	printf("Last digit of %d is %d", n, last_num);

	if (last_num > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_num < 6 && last_num > 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}

	return (0);
}

