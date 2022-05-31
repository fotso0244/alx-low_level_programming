#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * count_char - returns number of character in a file
 * @filename: a text file
 *
 * Return: number of characters
 */
size_t count_char(const char *filename)
{
	size_t i = 0;
	int fd;
	char *c;

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			c = malloc(sizeof(char));
			read(fd, c, 1);
			while (strcmp(c, "") != 0)
			{
				i++;
				free(c);
				c = malloc(sizeof(char));
				read(fd, c, 1);
			}
		}
	}
	free(c);
	close(fd);
	return (i);
}
/**
 * read_textfile - read a text file
 * @filename: a file name
 * @letters: number of letters to read
 *
 * Return: number of letters printed, otherwise 0
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	size_t w = 0;
	char *buf;

	if (filename != NULL && letters != 0)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			if (count_char(filename) != 0)
			{
				buf = malloc(sizeof(*buf) * count_char(filename));
				if (buf != NULL)
				{
					r = read(fd, buf, letters);
					if (r != -1)
						w = write(STDOUT_FILENO, buf, r);
					free(buf);
				}
			}
		}
	}
	close(fd);
	return (w);
}
