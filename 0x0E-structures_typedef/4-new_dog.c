#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to doggi
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	char *cp1, *cp2;
	dog_t *doggi;

	doggi = malloc(sizeof(dog_t));
	if (doggi == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	cp1 = malloc((sizeof(char) * i) + 1);
	if (cp1 == NULL)
	{
		free(doggi);
		return (NULL);
	}
	cp2 = malloc((sizeof(char) * j) + 1);
	if (cp2 == NULL)
	{
		free(cp1);
		free(doggi);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		cp1[i] = name[i];
	}
	for (j = 0; owner[j]; j++)
	{
		cp2[j] = owner[j];
	}
	cp1[i] = '\0';
	cp2[j] = '\0';
	doggi->name = cp1;
	doggi->owner = cp2;
	doggi->age = age;
	return (doggi);
}
