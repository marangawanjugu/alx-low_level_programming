#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
/**
 * error_handling - handle error
 * @exit_code: exit status
 * @error_message: error message to be printed
*/
void error_handling(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}
/**
 * copy_file - program that copies the content of a file to another file
 * @file_src: file to copy from
 * @file_dest: file to copy to
 *
*/
void copy_file(const char *file_src, const char *file_dest)
{
	int fd_src, fd_dest, read_contents, write_contents;
	char buffer[BUF_SIZE];

	fd_src  = open(file_src, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
	fd_dest = open(file_dest, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_dest);
		exit(99);
	}
	while ((read_contents = read(fd_src, buffer, BUF_SIZE)) > 0)
	{
		write_contents = write(fd_dest, buffer, read_contents);
		if (write_contents == -1 || write_contents != read_contents)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_dest);
			exit(99);
		}
	}
	if (read_contents == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero on success
*/
int main(int argc, char *argv[])
{
	const char *file_src, *file_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_src = argv[1];
	file_dest = argv[2];
	copy_file(file_src, file_dest);
	return (0);
}
