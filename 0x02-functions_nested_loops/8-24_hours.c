#include "main.h"
/**
 * jack_bauer - prints every minute of the day 00:00 to 23 :59
 * @avoid - no argument
 */
void jack_bauer(void)
{
	int i, j;
	for (i = 0; j < 24; j++)
	{
		for (j=0; i < 24; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
