#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  * Return: void
  */
void rev_string(char *s)
{
	int x, y, z;
	char *a, aux;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		aux = s[x];
		s[x] = *a;
		*a = aux;
		a--;
	}
}
