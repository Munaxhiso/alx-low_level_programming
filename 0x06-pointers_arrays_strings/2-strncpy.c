#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * if the length of the source string is less than the maximum byte number,
 * the remainder of the desrination string is filled with null bytes.
 * works identically to the standard library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @scr: the source string
 * @n:max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *scr, int n)
{

	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
