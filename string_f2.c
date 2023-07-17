#include "shell.h"

/**
 **_strncpy - copy a string
 *@dest: input value for the destination string to be copied to
 *@src: input value for the source string
 *@n: input value for the amount of characters to be copied
 *Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

/**
 **_strncat - concatenates two strings using at most n bytes from src
 *@dest: input value for the first string
 *@src: input value for the second string
 *@n: input value for the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: input value for the string to be parsed
 *@c: input value for the character to look for
 *Return: s is a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
