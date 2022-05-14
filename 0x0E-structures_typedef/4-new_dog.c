#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * cpystr - copies string
 * @name: string to copy
 *
 * Return: a pointer to char
 */
char *cpystr(char *name)
{
	char *dest;

	dest = malloc(strlen(name) + 1);
	if (dest != NULL)
	{
		strcpy(dest, name);
		dest[strlen(name)] = '\0';
	}
	return (dest);
}
/**
 * new_dog - creates new object of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res;

	if (name != NULL && owner != NULL)
	{
	
		if (res != NULL)
		{
			res->name = cpystr(name);
			res->owner = cpystr(owner);
		/*	if (res->name == NULL || res->owner == NULL)
			{
				free(res);
				return (NULL);
			}*/
			res->age = age;
		}
	}
	else
		return (NULL);
	return (res);
}
