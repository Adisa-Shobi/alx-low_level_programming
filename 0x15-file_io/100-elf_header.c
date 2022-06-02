#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

/**
 *main - Entry point to programthat prints elf header
 *@argv: Argument array
 *@argc: Argument count
 *Return: An integer
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	char *filename;
	int fd_header, rstatus, is_elf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header filename\n");
		exit(98);
	}
	filename = argv[1];
	fd_header = open(filename, O_RDONLY);
	if (fd_header < 0)
	{
		dprintf(STDERR_FILENO, "Error: Failed to open file %s\n",
			filename);
		exit(98);
	}
	header = malloc(sizeof(*header));
	if (header == NULL)
	{
		close(fd_header);
		free(header);
		dprintf(STDERR_FILENO,
			"Error: Failed to allocate header memory\n");
		exit(98);
	}
	rstatus = read(fd_header, header, sizeof(*header));
	if (rstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Failed to read fd %d\n",
			fd_header);
		exit(98);
	}
	is_elf = check_elf(header->e_ident);
	if (is_elf == 0)
	{
		free(header);
		close(fd_header);
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n",
			filename);
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abiversion(header->e_ident);
	print_type(header->e_type);
	print_address(header->e_entry, header->e_ident);
	return (0);
}

/**
 *check_elf - Checks to if header is elf
 *
 *@e_ident: A pointer to array of ELF magic numbers
 *Return: 1 if ELF, 0 if not
 */
int check_elf(unsigned char *e_ident)
{
	if ((e_ident[EI_MAG0] == 127) &&
	    (e_ident[EI_MAG1] == 'E') &&
	    (e_ident[EI_MAG2] == 'L') &&
	    (e_ident[EI_MAG3] == 'F'))
	{
		return (1);
	}
	else
		return (0);
}

/**
 *print_magic - prints the magic numberof the ELF file
 *
 *@e_ident: An array of magic numbers
 *Return: 1 if successful
 */
int print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == (EI_NIDENT - 1))
		{
			printf("\n");
		}
		else
			printf(" ");
	}
	return (1);
}

/**
 *print_class - prints the class of the ELF file
 *
 *@e_ident: An array of magic numbers
 *
 *Return: 0 if succesful
 */
int print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch(e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("Invalid\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		dprintf(STDERR_FILENO, "class does not match\n");
	}
	return (0);
}

/**
 *print_data - Prints the data type of ELF file
 *
 *@e_ident: Array of magic numbers
 *Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch(e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	default:
		dprintf(STDERR_FILENO, "Entry does not match any data type\n");
	}
}

/**
 *print_version print sthe version of the elf file
 *
 *@e_ident: An array of magic numbers
 *Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d %s\n",
	       e_ident[EI_VERSION],
	       e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 *Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 *print_abiversion - Prints the ABI bersion of an ELF
 *
 *@e_ident: An aray of magic numbers
 *Return: void
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 *print_type - Prints the type of ELF
 *
 *@e_type: type
 *Return: void
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");

	switch(e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 *print_address - prints the entry adress of the file
 *@e_entry: The entry point address
 *@e_ident: An array containing ELF class
 *Return: void
 */
void print_address(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
