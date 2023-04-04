#include "main.h"
#include <stddef.h>
/**
 * _strpbk - searches for any set of bytes
 * @s: pointer to the string
 * @accept: pointer to the string
 *
 * Return: pointer to s
 */
char *_strpbk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}

	return (NULL);
}
