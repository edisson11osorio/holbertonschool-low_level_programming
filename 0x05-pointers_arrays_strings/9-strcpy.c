#include <stdio.h>
#include "main.h"

/**
 * _strcpy-makes a copi of the scr to @dest with the '\0'
 *@dest: where did a copy
 *@src: the source string to cp
 *
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)

{
	char *a = dest;


	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (a);

}
