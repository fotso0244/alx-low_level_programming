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

	dest = malloc(strlen(name));
	if (dest != NULL)
	{
		strcpy(dest, name);
	/*	dest[strlen(name)] = '\0';*/
	}
	return (dest);
}
dog_t *new_dog2(char *name, float age, char *owner)
{
	dog_t *res;

	res = malloc(sizeof(dog_t));
	if (res != NULL)
	{
		if (name != NULL && owner == NULL)
		{
			res->name = cpystr(name);
			if (res->name == NULL)
			{
				free(res);
				return (NULL);
			}
			res->owner = owner;
			res->age = age;
		}
		if (owner != NULL && name == NULL)
		{
			res->owner = cpystr(owner);
			if (res->owner == NULL)
			{
				free(res);
				return (NULL);
			}
			res->name = name;
			res->age = age;
		}
		else
		{
			res->name = NULL;
			res->owner = NULL;
			res->age = age;
		}
		return (res);
	}
	else
		return (NULL);
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
		res = malloc(sizeof(dog_t));	
		if (res != NULL)
		{
			res->name = cpystr(name);
			res->owner = cpystr(owner);
			if (res->name == NULL || res->owner == NULL)
			{
				free(res);
				return (NULL);
			}
			res->age = age;
		}
	}
	else
	{
		res = new_dog2(name, age, owner);
	}
	return (res);
}
