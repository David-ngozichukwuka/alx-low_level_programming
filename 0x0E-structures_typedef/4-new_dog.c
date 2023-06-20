#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: string length
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a = a + 1;
	return (a);
}

/**
* *_strcpy - copies a string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by destination
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, a;

	while (src[len] != '\0')
		len++;

	for (a = 0; a < len; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (Success), otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1;
	int len2;
	dog_t *dg;


	len1 = _strlen(name);
	len2 = _strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = malloc(sizeof(char) * (len1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (len2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	_strcpy(dg->name, name);
	_strcpy(dg->owner, owner);
	dg->age = age;

	return (dg);
}
