#include "main.h"
#include<stdlib.h>

/**
  * append_text_to_file - appends a text to the end of the file
  * @filename: the name of the file
  * @text_content: the content of the file
  *
  * Return: int
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int zu, lu, zen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (zen = 0; text_content[zen];)
			zen++;
	}

	zu = open(filename, O_WRONLY | O_APPEND);
	lu = write(zu, text_content, zen);

	if (zu == -1 || lu == -1)
		return (-1);

	close(zu);

	return (1);
}
