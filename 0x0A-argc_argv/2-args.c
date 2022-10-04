#include <stdio.h>

/**
 * main - points all arguments it receives
 * @argc: number of arguments passed to the function
 * @argv: arguments vecto of pointers to strings
 *
 * return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
