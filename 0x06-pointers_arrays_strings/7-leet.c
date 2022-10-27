#include "main.h"

/**
  * leet - ...
  * @s: ...
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: ...
  * Return: The encoded string
  */
char *leet(char *s)
{
	
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		if (s[a] == 65 || s[a] == 97)
		b = 0;

		while (b < l)
		{
			s[a] = 52;
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}

			b++;
		}

		a++;
	}
	return (s);
}
