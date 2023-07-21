#include "main.h"
/**
  *print_diagonal - draws a diagonal
  *@n: the number of times \ char is printed
  *Return: Always 0
  */
void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; postn++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
