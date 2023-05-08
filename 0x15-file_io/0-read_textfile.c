#include "main.h"

/**
 *read_textfile - reads a text file and prints it to
 *the POSIX standard output
 *@filename: name of file to read
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t write_file, read_file;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	read_file = read(fd, buf, letters);
	if (read_file == -1)
		return (0);
	write_file = write(STDOUT_FILENO, buf, read_file);
	if (write_file == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buf);
	return (read_file);
}
