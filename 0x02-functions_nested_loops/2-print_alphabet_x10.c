#include "main.h"
/**
  *print_alphabet_X10 - prints alphabets 10 times
  *
  *Return: always 0
  *
  */
void print_alphabet_x10(void);
{
	int i = 0;
	int n;

	while (i < 10)
	{
		for (n = 0; n <= 122; n++)
		{
			_putchar(n);
		}
		i++
	}
	_putchar('\n');

}
