#include "main.h"
/**
  *print_square-print a square followed by a new line
  *@size: is the size of square
  *Return: Always 0
  */
void print_square(int size)
{
	int row, colom;

	for (row = 1; row <= size; row++)
	{
		for (colom = 1; colom <= size; colom++)
			_putchar('#');
		_putchar('\n');
	}
}
