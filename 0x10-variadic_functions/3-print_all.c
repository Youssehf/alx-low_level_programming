#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;

	va_start(args, format);
	while (format && format[i])
	{
		current_format = format[i];
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (current_format == 'c' || current_format == 'i'
					|| current_format == 'f' || current_format == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
