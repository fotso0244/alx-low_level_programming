#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * testwild - checks * special character
 * @s: a string
 * @j: int
 *
 * Return: 1 is true, otherwise 0
 */
int testwild(char *s, int j)
{
	int i = j, res;

	if (s[0] != '\0')
	{
		if (s[0] != 42)
		{
			i++;
			res = testwild(s + 1, i);
		}
		else
		{
			res = 0;
		}
	}
	else
		res = 1;
	return (res);
}
/**
 * test - test
 * @s2: char
 * @i: int
 *
 * Return: res
 */
int test(char *s2, int i)
{
	int res;

	if (s2[i] == 42 && s2[i + 1] != 42 && s2[i + 1] != '\0')
		res = 0;
	else
		if (s2[i] == 42)
			res = 1;
		else
			res = 0;
	return (res);
}
/**
 * wildcmp2 - compares 2 strings
 * @s1: first string without special character
 * @s2: second string with special character
 *
 * Return: 1 if true, otherwise 0
 */
int wildcmp2(char *s1, char *s2)
{
	int i = 0, res;

	if (testwild(s2, 0) && testwild(s1, 0))
	{
		if (strcmp(s1, s2) == 0)
			res = 1;
		else
			res = 0;
	}
	else

		if (s1[i] == s2[i] && s2[i] != 42)
		{
			i++;
			res = wildcmp2(s1 + i, s2 + i);
		}
		else
		{
			if (s2[i] == 42 && s1[i] != '\0')
			{
				i++;
				if (s2[i] != '\0')
				{
					if (s2[i] != 42 && strrchr(s1, s2[i]) != NULL)
						res = wildcmp2(strrchr(s1, s2[i]), strrchr(s2 + i, *(s2 + i)));
					else
					{
						res = wildcmp2(s1, s2 + i);
					}
				}
				else
					res = 1;
			}
			else
				res = test(s2, i);
		}
	return (res);
}
/**
 * wildcmp - compares 2 strings
 * @s1: first string without special character
 * @s2: second string with special character
 *
 * Return: 1 if true, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int res;

	if (s1 != NULL && s2 != NULL)
	{
		if (testwild(s2, 0) == 1 && testwild(s1, 0) == 1)
		{
			if (strcmp(s1, s2) == 0)
				res = 1;
			else
				res = 0;
		}
		else
			if (testwild(s2, 0) == 0 && testwild(s1, 0) == 1)
			{
				res = wildcmp2(s1, s2);
			}
			else
				if (testwild(s1, 0) == 0 && testwild(s2, 0) == 1)
				{
					res = wildcmp2(s2, s1);
				}
	}
	else
		res = 0;
	return (res);
}

