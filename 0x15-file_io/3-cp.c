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
 * copy1 - copies a file
 * @file1: first file
 * @count: a counter
 * @file2: second file
 */
void copy1(char *file1, int count, char *file2)
{
	char *buf;
	int cl, fd, r, c;

	fd = open(file1, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	buf = malloc(sizeof(*buf) * count);
	r = read(fd, buf, count);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (buf != NULL)
	{
		c = create_file(file2, buf);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
		free(buf);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy2 - copies a file
 * @file1: first file
 * @count: a counter
 * @file2: second file
 */
void copy2(char *file1, int count, char *file2)
{
	int cl, c2 = 1024, choice = 0, c, fd;
	char *buf;

	fd = open(file1, O_RDONLY);
	while (count > 0)
	{
		buf = malloc(sizeof(*buf) * c2);
		if (buf != NULL)
		{
			if (fd == -1 || read(fd, buf, c2) == -1)
			{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			exit(98);
			}
			if (choice == 0)
			{
				c = create_file(file2, buf);
				choice = 1;
			}
			else
				c = append_text_to_file(file2, buf);
			free(buf);
			count -= 1024;
			if (count > 1024)
				c2 = 1024;
			else
				c2 = count;
			if (c == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
				exit(99);
			}
		}
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
	size_t i = 0;
	int fd;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (strcmp(argv[2], "") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to \n");
		exit(99);
	}
	if (argv[1] != NULL)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			c = malloc(sizeof(char));
			if (c != NULL)
			{
				read(fd, c, 1);
				while (strcmp(c, "") != 0)
				{
					i++;
					free(c);
					c = malloc(sizeof(char));
					read(fd, c, 1);
				}
				free(c);
			}
			close(fd);
		}
	}
	if (i <= 1024)
		copy1(argv[1], i, argv[2]);
	else
		copy2(argv[1], i, argv[2]);
	return (0);
}
