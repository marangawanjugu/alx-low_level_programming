#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Return: int value
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, write_contents;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_contents = write(fd, text_content, _strlen(text_content));
		if (write_contents == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
		return (-1);
	close(fd);
	return (1);
}
