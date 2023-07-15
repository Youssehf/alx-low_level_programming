#include <stdio.h>
/**
  *main - entry point
  *Description: prints all single digit numbers
  *returns: Always 0
  */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
