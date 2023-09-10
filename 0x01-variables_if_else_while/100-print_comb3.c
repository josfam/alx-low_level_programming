#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The entry point for this program.
 *
 * Return: 0 if successful. Non-zero otherwise.
 */
int main(void)
{
	int left_num;
	int right_num;

	/* For the left number */
	for (left_num = 48; left_num <= 56; left_num++)
	{
		/* For the right number */
		for (right_num = left_num; right_num <= 57; right_num++)
		{
			/* don't print the same numbers */
			if (left_num != right_num)
			{
				putchar(left_num);
				putchar(right_num);
				/* special case for 89 */
				if (left_num == 56 && right_num == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
