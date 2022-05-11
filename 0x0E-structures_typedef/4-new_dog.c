#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
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

	res = malloc(sizeof(dog_t));
	if (res != NULL)
	{
		if (name != NULL)
		{
			res->name = malloc(strlen(name) + 1);
			if (res->name != NULL)
			{
				strcpy(res->name, name);
				res->name[strlen(name)] = '\0';
			}
			else
				return (NULL);
		}
		else
			return (NULL);
		if (owner != NULL)
		{
			res->owner = malloc(strlen(owner) + 1);
			if (res->owner != NULL)
			{
				strcpy(res->owner, owner);
				res->owner[strlen(owner)] = '\0';
			}
			else
				return (NULL);
		}
		else
			return (NULL);
		res->age = age;
	}
	else
		return (NULL);
	return (res);
}
