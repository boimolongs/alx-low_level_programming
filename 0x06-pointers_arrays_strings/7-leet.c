#include "main.h"

/**
 * leet - Encode a string into "1337" language.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_replace[] = "44330771";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_dict[j] != '\0'; j++)
		{
			if (str[i] == leet_dict[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}

	return (str);
}

