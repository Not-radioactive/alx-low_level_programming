#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * Return: I deleted the return line and it worked, so IDC.
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = (i * j);

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (times >= 10)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else if (times < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar((times % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
