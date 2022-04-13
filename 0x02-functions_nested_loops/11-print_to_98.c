#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers between n and 98
 * @n: first number
 */
void print_to_98(int n)
{
	int i;
	if ((n >= 0) && (n <= 98))
	{
		for (i = n; i <=98; i++)
		{
			print("%d", i)
			if (i != 98)
				printf(", ", i);
		}
	}
	else
		if ((n > 0) && (n > 98))
		{
			for (i = 98; i > 98; i--)
			{
				print("%d", i);
				if (i != 98)
					printf(", ");
		}
		else
			if (n < 0)
				for (i = n; i <= 98; i++)
				{
					printf("%d", i);
					if (i != 98)
						printf(", ");
				}
	printf("\n");
}
