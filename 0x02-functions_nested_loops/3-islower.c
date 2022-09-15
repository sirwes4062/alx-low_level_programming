#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: is the int that will use for the argment of a function
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
