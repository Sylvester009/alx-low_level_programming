#include "dog.h"
#include <stdlib.h>

/**
 * strLen - returns length of string
 * @str: string
 *
 * Return: length of string
 */

int strLen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * strCpy - copys string from original
 * @dupl: pointer for the copied string
 * @origi: string to be copied
 *
 * Return: pointer to dupl
 */

char *strCpy(char *dupl, char *origi)
{
	int length = 0, i;

	while (origi[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dupl[i] = origi[i];
	}
	dupl[i] = '\0';

	return (dupl);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len1, len2;

	len1 = strLen(name);
	len2 = strLen(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (len1 + 1));

	newDog->owner = malloc(sizeof(char) * (len2 + 1));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strCpy(newDog->name, name);
	strCpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
