#include <elf.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define REVERSE_ENDIAN(n) ((n << 24) | (((n >> 16) << 24) >> 16) | (((n << 16) >> 24) << 16 | (n >> 24))

/**
 * verify - Verify if the file is in ELF format.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function checks if the provided file is in the ELF format.
 * If not, it displays an error and exits the program.
 */
void verify(unsigned char *e_ident)
{
if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
*(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: This file is not a valid ELF\n");
exit(98);
}
}

/**
 * print_magic - Print the ELF magic number.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function prints the magic bytes from the ELF header.
 */
void print_magic(unsigned char *e_ident)
{
int i; /* Index to count the magic bytes */
int limit;

limit = EI_NIDENT - 1;
printf("  Magic:   ");
for (i = 0; i < limit; i++)
printf("%02x ", *(e_ident + i));
printf("%02x\n", *(e_ident + i));
}

/**
 * print_class - Print the class of the ELF.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function prints the class (32-bit or 64-bit) of the ELF.
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
if (e_ident[EI_CLASS] == ELFCLASSNONE)
printf("This class is invalid\n");
else if (e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - Print the type of data encoding.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function prints the data encoding (little or big endian) of the ELF.
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
if (e_ident[EI_DATA] == ELFDATANONE)
printf("Unknown data format\n");
else if (e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (e_ident[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * print_version - Print the version of the ELF file.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function prints the version of the ELF file.
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:                           ");
if (e_ident[EI_VERSION] == EV_CURRENT)
printf("%i (current)\n", EV_CURRENT);
else
printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - Print the OS/ABI of the ELF.
 *
 * @e_ident: A pointer to the ELF structure.
 * This function prints the OS/ABI (operating system/ABI) of the ELF.
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
printf("UNIX - System V\n");
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * print_type - Print the type of the ELF file.
 *
 * @e_ident: A pointer to the ELF structure.
 * @e_type: Data to compare and print.
 * This function prints the type of the ELF file.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
e_ident[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

printf("  Type:                              ");
if (e_type == ET_NONE)
printf("NONE (Unknown type)\n");
else if (e_type == ET_REL)
printf("REL (Relocatable file)\n");
else if (e_type == ET_EXEC)
printf("EXEC (Executable file)\n");
else if (e_type == ET_DYN)
printf("DYN (Shared object file)\n");
else if (e_type == ET_CORE)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - Print the entry point address of the ELF.
 *
 * @e_ident: A pointer to the ELF structure.
 * @e_entry: The data to print.
 * This function prints the entry point address of the ELF.
 */
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_entry = REVERSE_ENDIAN(e_entry);

printf("  Entry point address:               %#x\n", (unsigned int)e_entry);
}

/**
 * main - Read an ELF file.
 *
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * This function reads an ELF file and prints its header information.
 * Returns 0 on success.
 */
int main(int argc, char *argv[])
{
int fd, _read, _close;
Elf64_Ehdr *file;

if (argc > 2 || argc < 2)
dprintf(STDERR_FILENO, "Usage: Invalid number of arguments\n"), exit(98);
file = malloc(sizeof(Elf64_Ehdr));
if (file == NULL)
dprintf(STDERR_FILENO, "Error: Failed to allocate memory\n"), exit(98);
fd = open(*(argv + 1), O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
exit(98);
}
_read = read(fd, file, sizeof(Elf64_Ehdr));
if (_read == -1)
{
free(file);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
exit(98);
}
verify(file->e_ident);
print_magic(file->e_ident);
print_class(file->e_ident);
print_data(file->e_ident);
print_version(file->e_ident);
print_osabi(file->e_ident);
printf("  ABI Version:                       ");
printf("%i\n", file->e_ident[EI_ABIVERSION]);
print_type(file->e_type, file->e_ident);
print_entry(file->e_entry, file->e_ident);
free(file);
_close = close(fd);
if (_close)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(98);
}
return (0);
}

