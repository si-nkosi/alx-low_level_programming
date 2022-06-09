#include "main.h"
#include <stdio.h>

/**
  * _isupper - Check if character is uppercase
  * @c: Character to be checked
  * Return: 1 for upper letter or 0 for any else
  */
char _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
