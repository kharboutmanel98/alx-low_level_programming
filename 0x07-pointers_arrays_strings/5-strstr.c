#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ahaystack;
	char *aneedle;

	while (*haystack != '\0')
	{
		ahaystack = haystack;
		aneedle = needle;

		while (*haystack != '\0' && *aneedle != '\0' && *haystack == *aneedle)
		{
			haystack++;
			aneedle++;
		}
		if (!*aneedle)
			return (ahaystack);
		haystack = ahaystack + 1;
	}
	return (0);
}
