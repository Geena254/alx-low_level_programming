#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - this returns the length of a string
 * @s: the string to evaluate
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - this copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int leng, b;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (b = 0; b < leng; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 * Return: The pointer to the new dog on Success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int leng1;
	int leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	(*dog1).name = malloc(sizeof(char) * (leng1 + 1));
	if ((*dog1).name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog1->owner == NULL)
	{
		free(dog1);
		free(dog1->name);
		return (NULL);
	}
	_strcpy((*dog1).name, name);
	_strcpy(dog1->owner, owner);
	dog1->age = age;

	return (dog1);
}
