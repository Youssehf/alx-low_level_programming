#include "main.h"
/**
 *_strcat - Concatenates two strings
 *@dest: first char arry
 *@src: second char arry
 *
 *Return: result
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
