#include "main.h"

/**
  * create_file - a function that append a
  * text to the end of a file
  * @filename: the file to open
  * @text_content: the string to add to the file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int file_d, wrd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrd = write(file_d, text_content, len);

	if (file_d == -1 || wrd == -1)
		return (-1);
	close(file_d);

	return (1);
}

