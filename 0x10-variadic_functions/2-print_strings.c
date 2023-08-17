#include "variadic.h"
/**
 *print_strings - Prints strings
 *@separator: Printed between strings
 *@n: The num of intgers passed to the function
 *
 *Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ach;
	unsigned int i;
	char *str;

	va_start(ach, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ach, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	var_end(ach);
	printf("\n");
}
