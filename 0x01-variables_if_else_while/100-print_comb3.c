#include <stdio.h>
/**
  *main - Entry point
  *Description: print all possible different combination of 2 digits
  *Return: Always 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
