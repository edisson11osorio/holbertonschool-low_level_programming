#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings in a new allocated space.
 * @s1: given string 1.
 * @s2: given string 2, which is concatenated.
 * Return: Pointer to allocated memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenar;
	unsigned int i, j, cp, r, final_leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	final_leng = i + j + 1;

	concatenar = malloc(final_leng * sizeof(char));

	if (concatenar == NULL)
		return (NULL);

	for (cp = 0; cp < i; cp++)
	{
		concatenar[cp] = s1[cp];
	}
	for (r = 0; r < j; cp++, r++)
	{
		concatenar[cp] = s2[r];
	}

	return (concatenar);
}
