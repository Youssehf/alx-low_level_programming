#include "main.h"
/**
 *_strncat - concatinates 2 strings
 *@dest: first string
 *@src: second string
 *@n: the limit of copies from src
 *Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
