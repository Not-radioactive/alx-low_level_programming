#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest : a string
 * @src : another string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
