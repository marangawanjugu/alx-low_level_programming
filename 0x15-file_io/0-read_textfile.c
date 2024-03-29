#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of a file
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_letters, write_letters;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_letters = read(fd, buffer, letters);
	if (read_letters == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write_letters = write(STDOUT_FILENO, buffer, read_letters);
	if (write_letters == -1 || write_letters != read_letters)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (write_letters);
}
