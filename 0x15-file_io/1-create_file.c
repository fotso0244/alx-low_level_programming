#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - creates a text file
 * @filename: a file name
 * @text_content: a text to fill a file
 *
 * Return: 1 if success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w = -1;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd != -1)
		{
			if (text_content != NULL)
			{
				w = write(fd, text_content, (int)strlen(text_content));
				if (w != -1)
					w = 1;
				else
					w = -1;
			}
			close(fd);
		}
	}
	return (w);
}
