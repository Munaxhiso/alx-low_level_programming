#include "main.h"

/**
 * _strncat - concatenates two strings nut add inputed number of bytes
 * @dest: string to be appended upon
 * @scr: string to be completed at the end of the dest
 * @n:integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (*(dest + i) != '\0')
			i++;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);

}
