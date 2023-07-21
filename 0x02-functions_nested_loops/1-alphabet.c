#include "main.h"
/**
  *main - prints alphabet in lowercase followed by new line
  *
  *Return: always 0
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
