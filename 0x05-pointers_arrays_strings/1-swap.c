#include "main.h"
/**
  * swap_int - swap two integers
  *@a: the first nteger
  *@b: the second integer
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
