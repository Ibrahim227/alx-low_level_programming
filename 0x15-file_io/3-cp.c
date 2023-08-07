#include "main.h"
#include<stdio.h>
#include<stdlib.h>

char *create_buffer(char *file);
void close_file(int fp);

/**
  * create_buffer - allocate 1024 bytes for the buffer
  * @file: the file
  *
  * Return: A pointer
  */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
  * close_file - close the file
  * @fp: an integer
  */
void close_file(int fp)
{
	int i;

	i = close(fp);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp at %d\n", fp);
		exit(100);
	}
}

/**
  * main - copies a content of a file to another
  * @argc: the number of argument
  * @argv: an Array of pointer
  *
  * Return: 0 on Success
  */
int main(int argc, char *argv[])
{
	int source, to, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_source to file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	re = read(source, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(source, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buffer);
	close_file(source);
	close_file(to);

	return (0);
}
