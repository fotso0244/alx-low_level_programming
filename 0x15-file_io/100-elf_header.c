#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif
/**
 * print_magic - prints magic
 * @m: a magic attribute
 * @size: size of magic
 */
void print_magic(unsigned char *m, int size)
{
	int i;

	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i <= size - 1; i++)
	{
		printf("%02x", m[i]);
		if (i != 15)
			printf(" ");
		else
			printf("\n");
	}
}
/**
 * print_class - prints class
 * @c: a class
 */
void print_class(unsigned char c)
{
	int i;

	printf("  Class:");
	for (i = 0; i <= 28; i++)
		printf(" ");
	printf("ELF");
	if (c == 2)
		printf("64\n");
	if (c == 1)
		printf("32\n");
}
/**
 * print_data - prints data
 * @d: a data
 */
void print_data(unsigned char d)
{
	int i;

	printf("  Data:");
	for (i = 0; i <= 29; i++)
		printf(" ");
	printf("2's complement, ");
	if (d == 1)
		printf("little endian\n");
	if (d == 2)
		printf("big endian\n");
}
/**
 * print_version - prints version
 * @v: a version
 */
void print_version(unsigned char v)
{
	int i;

	printf("  Version:");
	for (i = 0; i <= 26; i++)
		printf(" ");
	printf("%u (current)\n", v);
}
/**
 * print_os - prints 0S/ABI
 * @os: an os
 */
void print_os(unsigned char os)
{
	int i;

	printf("  OS/ABI:");
	for (i = 0; i <= 27; i++)
		printf(" ");
	switch (os)
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 1:
			printf("HP - UX\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 3:
			printf("Linux\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		case 7:
			printf("IBM - AIX\n");
			break;
		case 8:
			printf("SGI - Irix\n");
			break;
		case 9:
			printf("FreeBSD\n");
			break;
		default:
			printf("\n");
	}
}
/**
 * print_abi_version - prints ABI Version
 * @a: an ABI Version
 */
void print_abi_version(unsigned char a)
{
	int i;

	printf("  ABI Version:");
	for (i = 0; i <= 22; i++)
		printf(" ");
	printf("%u\n", a);
}
/**
 * print_type - print type
 * @t: a type
 */
void print_type(uint16_t t)
{
	int i;

	printf("  Type:");
	for (i = 0; i <= 29; i++)
		printf(" ");
	switch (t)
	{
		case 0:
			printf("NONE (Unknown)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object)\n");
			break;
		case 4:
			printf("Core file\n");
			break;
		default:
			printf("EXEC (Excecutable file)\n");
	}
}
/**
 * print_entry_point - prints object file type
 * @v: a version
 */
void print_entry_point(uint32_t v)
{
	int i;

	printf("  Entry point address:");
	for (i = 0; i <= 14; i++)
		printf(" ");
	printf("0x%x\n", v);
}
/**
 * print_head - prints head
 * @head: a header
 */
void print_head(ElfW(Ehdr) head)
{
	print_magic(head.e_ident, 16);
	print_class(head.e_ident[4]);
	print_data(head.e_ident[5]);
	print_version(head.e_ident[6]);
	print_os(head.e_ident[7]);
	print_abi_version(head.e_ident[8]);
	print_type(head.e_type);
	print_entry_point(head.e_entry);
}
/**
 * read_elf_header - reads a header
 * @elfFile: an elf file
 */
void read_elf_header(const char *elfFile)
{
	ElfW(Ehdr) head;
	int fd, r;
	unsigned char t[4] = {127, 'E', 'L', 'F'};

	fd = open(elfFile, O_RDONLY);
	if (fd != -1)
	{
		r = read(fd, &head, sizeof(head));
		if (r != -1)
		{
			if (memcmp(head.e_ident, t, 4) == 0)
				print_head(head);
			else
			{
				dprintf(2, "File %s is not an elf file\n", elfFile);
				exit(98);
			}
		}
		close(fd);
	}
	else
	{
		dprintf(2, "File %s cannot open\n", elfFile);
		exit(98);
	}
}
/**
 * main - prints an elf header
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	read_elf_header(argv[1]);
	return (0);
}
