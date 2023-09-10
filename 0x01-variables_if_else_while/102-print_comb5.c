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
	/* For the left half of the two 2-digt number (00 to 98)*/
	int L_left, L_right;
	/* For the right half of the two 2-digit number (01 to 99) */
	int R_left, R_right;

	/* left half */
	/* left digit of the left half */
	for (L_left = '0'; L_left <= '9'; L_left++)
	{
		/* right digit of the left half  */
		for (L_right = '0'; L_right <= '8'; L_right++)
		{
			/* right half */
			/* left digit of the right half */
			for (R_left = '0'; R_left <= '9'; R_left++)
			{
				/* right digit of the right half */
				for (R_right = '0' ; R_right <= '9'; R_right++)
				{
					/* special case for 00*/
					if (R_left == '0' && R_right == '0')
						continue;

					/* print two digits of the left half */
					putchar(L_left);
					putchar(L_right);
					putchar(' ');
					putchar(R_left);
					putchar(R_right);
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
