#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be captalized
 * Return: string
 */
char *cap_string(char *s)
{
	int x = 0, y;


	char specialChar[13] = " \t\n,;.!?\"(){}";


	for (x = 0, s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[i] -= 32;

		for (y = 0; y < 13; y++)
		{
			if (s[x] == specialChar[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
