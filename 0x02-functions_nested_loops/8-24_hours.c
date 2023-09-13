#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer.
 * Description: Print every minute of the day of Jack Bauer from 00:00 to 23:59
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	int hour_left;
	int hour_right;
	int minute_left;
	int minute_right;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			hour_left = hour / 10;
			hour_right = hour % 10;
			minute_left = minute / 10;
			minute_right = minute % 10;
			_putchar('0' + hour_left);
			_putchar('0' + hour_right);
			_putchar(':');
			_putchar('0' + minute_left);
			_putchar('0' + minute_right);
		}
	}
}

