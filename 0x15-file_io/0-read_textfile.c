#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @let: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t let)
{
	int fd;
	ssize_t nd, nr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (let));
	if (!buf)
		return (0);

	nd = read(fd, buf, let);
	nr = write(STDOUT_FILENO, buf, nd);

	close(fd);

	free(buf);

	return (nr);
}
