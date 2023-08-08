#include "main.h"
#include <elf.h>

/**
 * validate_elf - test if the file is an ELF file
 * @h: elf header
 *
 * Return: void
 */
void validate_elf(Elf64_Ehdr h)
{
	if (h.e_ident[0] != 127 &&
			h.e_ident[1] != 'E' &&
			h.e_ident[2] != 'L' &&
			h.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Invalid ELF file\n");
		exit(98);
	}
}

/**
 * output_magic - displays Magic info
 * @h: elf header
 *
 * Return: void
 */
void output_magic(Elf64_Ehdr h)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", h.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}

/**
 * output_class - displays Class info
 * @h: elf header
 *
 * Return: void
 */
void output_class(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", h.e_ident[EI_CLASS]);
			break;
	}
}

/**
 * output_data - displays Data info
 * @h: elf header
 *
 * Return: void
 */
void output_data(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", h.e_ident[EI_DATA]);
			break;
	}
}

/**
 * output_version - displays Version info
 * @h: elf header
 *
 * Return: void
 */
void output_version(Elf64_Ehdr h)
{
	printf("%d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
	}
	printf("\n");
}

/**
 * output_osabi - displays OS/ABI info
 * @h: elf header
 *
 * Return: void
 */
void output_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
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
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
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
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * output_abiversion - displays ABI Version info
 * @h: elf header
 *
 * Return: void
 */
void output_abiversion(Elf64_Ehdr h)
{
	printf("%d\n", h.e_ident[EI_ABIVERSION]);
}

/**
 * output_type - displays Type info
 * @h: elf header
 *
 * Return: void
 */
void output_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
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
			printf("<unknown: %x>\n", p[i]);
			break;
	}
}

/**
 * output_entry - displays Entry point address info
 * @h: elf header
 *
 * Return: void
 */
void output_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}

/**
 * display_all - displays info combined
 * @h: elf header
 *
 * Return: void
 */
void display_all(Elf64_Ehdr h)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	output_magic(h);
	printf("  Class:                             ");
	output_class(h);
	printf("  Data:                              ");
	output_data(h);
	printf("  Version:                           ");
	output_version(h);
	printf("  OS/ABI:                            ");
	output_osabi(h);
	printf("  ABI Version:                       ");
	output_abiversion(h);
	printf("  Type:                              ");
	output_type(h);
	printf("  Entry point address:               0x");
	output_entry(h);
}

/**
 * main - displays info in the ELF header at the start of an ELF file
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr h;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: File %s failed to open\n", argv[1]);
		exit(98);
	}
	if (read(fd, &h, sizeof(h)) != sizeof(h))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		close(fd);
		exit(98);
	}
	validate_elf(h);
	display_all(h);
	close(fd);
	return (0);
}
