#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_error - prints error message
 * @message: error message to be printed
 *
*/
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - displays information contained in the ELF header
 * at the start of an ELF file
 * @filename: string containing the name of the file
 *
*/
void display_elf_header(const char *filename)
{
	Elf64_Ehdr *elf_header;
	int bytes_read, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Error opening the file");
	}
	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read == -1 || bytes_read != sizeof(elf_header))
	{
		display_error("Error reading the ELF header");
	}
	if (elf_header->e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header->e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header->e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header->e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not an ELF file");
	}
	printf("Magic: %02x %02x %02x %02x\n", elf_header->e_ident[EI_MAG0],
			elf_header->e_ident[EI_MAG1],
			elf_header->e_ident[EI_MAG2],
			elf_header->e_ident[EI_MAG3]);
	printf("Class: %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("Data: %s\n", elf_header->e_ident[EI_DATA]  == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endiain");
	printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("ABI VERSION: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", elf_header->e_type == ET_EXEC ?
			"EXEC (Executable file)" : "Other");
	printf("Entry point address: %#lx", (unsigned long)elf_header->e_entry);
	close(fd);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	display_elf_header(argv[1]);
	return (0);
}
