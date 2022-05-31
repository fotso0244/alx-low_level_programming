#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
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
	size_t w;
	char *buf;

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			buf = malloc(sizeof(*buf) * letters);
			if (buf != NULL)
			{
				r = read(fd, buf, letters);
				if (r != -1)
					w = write(STDOUT_FILENO, buf, r);
				else
					w = 0;
			}
			else
				w = 0;
		}
		else
			w = 0;
	}
	else
		w = 0;
	return (w);
}
