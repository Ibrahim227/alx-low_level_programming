#include "main.h"
#include<stdlib.h>


/**
  * read_textfile - read a text file and prints it to POSIX standard output
  * @filename: filename
  * @letters: numer of letters it should read and print
  *
  * Return: size
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ap;
	ssize_t fp;
	ssize_t tp;

	ap = open(filename, O_RDONLY);
	if (ap == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tp = read(ap, buff, letters);
	fp = write(STDOUT_FILENO, buff, tp);

	free(buff);
	close(ap);

	return (fp);
}
