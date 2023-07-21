#include "main.h"
/**
  *print_alphabet_X10 - prints alphabets 10 times
  *
  *Return: always 0
  *
  */
void print_alphabet_x10(void);
{
	int i, n;

	for (i = 0 ; i <= 9; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
