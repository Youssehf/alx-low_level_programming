#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers followed by a new line.
 *@separator: The string to be printed between numbers
 *@n: The number of integers passed to the function.
 *
 *Return: The variable arg result in func
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	var_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_ends(args);
	printf("\n");
}
