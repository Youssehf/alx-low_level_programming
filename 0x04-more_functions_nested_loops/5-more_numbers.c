#include "main.h"
/**
  *more_numbers - print numbers fron 0 to 14 ten times
  *Return: Always 0
  */
void more_numbers(void)
{
	int i, n, y;

	for (n = 1; n <= 10; n++)
	{
		for (y = 0; y <= 14; y++)
		{
			i = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				i = y % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n';
	}
}
