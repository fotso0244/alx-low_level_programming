#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * append_text_to_file - appends text at end of a file
 * @filename: a file name
 * @text_content: a text to append to a file
 *
 * Return: 1 if success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w = -1;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd != -1)
		{
			if (strcmp(text_content, "NULL") != 0)
			{
				write(fd, text_content, (int)strlen(text_content));
				w = 1;
			}
			else
				w = 1;
			close(fd);
		}
	}
	return (w);
}
