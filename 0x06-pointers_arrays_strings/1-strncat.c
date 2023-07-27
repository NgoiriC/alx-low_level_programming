#include "main.h"

/**
 * _strncat - concentrates two strings using at most
 * an inputted number of bytes fro src.
 * @dest: The string to be appended.
 * @src: The string to be appended to dest.
 * @n: The nuber of bytes fro src to be appended to dest.
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
