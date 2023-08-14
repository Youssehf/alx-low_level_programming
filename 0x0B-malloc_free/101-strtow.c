#include <stdlib.h>

/**
 * wordcount - helper function to count the number of words in a string
 * @str: string to check
 * Return: number of words in string
 */
int wordcount(char *str)
{
	int x, y, z;

	x = 0;
	z = 0;

	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array, *temp;
	int i, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = wordcount(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				array[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	array[k] = NULL;

	return (array);
}
