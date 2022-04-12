#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *
 *Return: void
 */
void jack_bauer(void)
{
	int hours;

	int mins;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (mins = 0 ; mins < 59 ; mins++)
		{
			if (hours < 10)
				_putchar('0');
			_putchar(hours + '0');
			_putchar(':');
			if (mins < 10)
				_putchar('0');
			_putchar(mins + '0');
			_putchar('\n');
		}
	}
}
