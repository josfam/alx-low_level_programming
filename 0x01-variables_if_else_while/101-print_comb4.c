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
	int left;
	int mid;
	int right;

	/* for left digit */
	for (left = '0'; left <= '7'; left++)
	{
		/* for middle digit */
		for (mid = left + 1; mid <= '8'; mid++)
		{
			/* for right digit */
			for (right = mid + 1; right <= '9'; right++)
			{
				/* print the three numbers*/
				putchar(left);
				putchar(mid);
				putchar(right);
				/* add the comma and space */
				/* but not after the last digit in the print*/
				if (left == '7' && mid == '8' && right == '9')
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}
	/* print the newline */
	putchar('\n');
	return (0);
}
