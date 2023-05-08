#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	long int write_file;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write_file = write(fd, text_content, len);
		if (write_file == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
