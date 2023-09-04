#include "main.h"
#include<stdlib.h>

/**
  * read_textfile - read a text file and prints it to POSIX
  * standard output
  * @filename: file name
  * @letters: the letter ro read and print
  *
  * Return: ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f_val;
	ssize_t w_val;
	ssize_t t_val;

	f_val = open(filename, O_RDONLY);
	if (f_val == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	t_val = read(f_val, buff, letters);
	w_val = write(STDOUT_FILENO, buff, t_val);

	free(buff);
	close(f_val);
	return (w_val);
}

