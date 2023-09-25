#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	if (str)
	{
		char *ptr = str;

		while (*ptr)
		{
			char rotate = (*ptr >= 'A' && *ptr <= 'Z') ? 'A' : (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 0;

			if (rotate)
			{
				*ptr = (((*ptr - rotate + 13) % 26) + rotate);
			}
			ptr++;
		}
	}

	return (str);
}

