#include "main.h"
/**
 * _strlen: prints the length of a string
 *
 * @*s: character to store the length
 *
 * Return: yaw void new
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while(s[u] != '\0')
	{
	u++;
	}
	return (u);
}

