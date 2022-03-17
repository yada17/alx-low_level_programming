#include "main.h"
/**
 * _isalpha -checks alphabets
 * @c: takes in character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 **/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
