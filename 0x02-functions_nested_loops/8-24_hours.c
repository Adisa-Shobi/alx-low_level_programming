#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *
 *Return: void
 */
void jack_bauer(void)
{
	int hours_1;

	int hours_2;

	int mins_1;

	int mins_2;

	for (hours_1 = 0 ; hours_1 <= 2 ; hours_1++)
	{
		for (hours_2 = 0 ; hours_2 <= 4 ; hours_2++)
		{
			for (mins_1 = 0 ; mins_1 <= 6 ; mins_1++)
			{
				for (mins_2 = 0 ; mins_2 < 10 ; mins_2++)
				{
					_putchar(hours_1 + '0');
					_putchar(hours_2 + '0');
					_putchar(':');
					_putchar(mins_1 + '0');
					_putchar(mins_2 + '0');
					_putchar('\n');
		}
	}
}
