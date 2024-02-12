#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, length, write_contents;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		{} /*finding the length of the string*/
		write_contents = write(fd, text_content, length);
		if (write_contents == -1 || write_contents != length)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
	close(fd);
	return (1);
}
