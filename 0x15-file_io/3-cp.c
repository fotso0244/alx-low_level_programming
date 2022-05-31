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
			if (text_content != NULL)
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
/**
 * create_file - creates a text file
 * @filename: a file name
 * @text_content: a text to fill
 *
 * Return: 1 if success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w = -1;
	char cmd[32];

	if (filename != NULL && strcmp(filename, "") != 0)
	{
		if (access(filename, F_OK) == -1)
		{
			fd = open(filename, O_WRONLY | O_CREAT);
			sprintf(cmd, "chmod 664 %s", filename);
			system(cmd);
			/*fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0674);*/
		}
		else
			fd = open(filename, O_WRONLY | O_TRUNC);
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
/**
 * count_char - returns size of a text file
 * @filename: a text file
 *
 * Return: size of file
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
			close(fd);
		}
	}
	free(c);
	return (i);
}
/**
 * main - copies a file
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int fd, count, c, cl, choice = 0;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	count = count_char(argv[1]);
	if (fd != -1)
	{
		if (count != 0)
		{
			while (count >= 0)
			{
				buf = malloc(sizeof(*buf) * 1024);
				if (buf != NULL)
				{
					read(fd, buf, 1024);
					if (choice == 0)
					{
						c = create_file(argv[2], buf);
						choice = 1;
					}
					else
						c = append_text_to_file(argv[2], buf);
					free(buf);
					count -= 1024;
					if (c == -1)
					{
						dprintf(2, "Error: Can't write to %s\n", argv[2]);
						exit(99);
					}
				}
			}
		}
		cl = close(fd);
		if (cl == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
	return (0);
}
