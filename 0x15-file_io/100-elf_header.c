#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>

/**
* error_exit - Print an error message to stderr and exit with status code 98
* @msg: Error message to display
*/
void error_exit(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
* print_elf_header - Print information from the ELF header
* @header: Pointer to the ELF header
*/
void print_elf_header(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

printf("  Class:                             %s\n",
header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

printf("  Data:                              %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");

printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:    printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX:    printf("HP-UX\n"); break;
case ELFOSABI_NETBSD:  printf("NetBSD\n"); break;
case ELFOSABI_LINUX:   printf("Linux\n"); break;
case ELFOSABI_SOLARIS: printf("Solaris\n"); break;
case ELFOSABI_AIX:     printf("AIX\n"); break;
case ELFOSABI_IRIX:    printf("IRIX\n"); break;
case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
case ELFOSABI_TRU64:   printf("TRU64 UNIX\n"); break;
case ELFOSABI_MODESTO: printf("Novell Modesto\n"); break;
case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
default:                printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
}

printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:    printf("NONE (Unknown type)\n"); break;
case ET_REL:     printf("REL (Relocatable file)\n"); break;
case ET_EXEC:    printf("EXEC (Executable file)\n"); break;
case ET_DYN:     printf("DYN (Shared object file)\n"); break;
case ET_CORE:    printf("CORE (Core file)\n"); break;
default:         printf("<unknown: %d>\n", header->e_type);
}

printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2)
error_exit("Usage: elf_header elf_filename");

const char *filename = argv[1];
int fd = open(filename, O_RDONLY);
if (fd == -1)
error_exit("Error: Unable to open file");

Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1 || bytes_read != sizeof(header))
error_exit("Error: Unable to read ELF header");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file");

print_elf_header(&header);
close(fd);
return (0);
}

