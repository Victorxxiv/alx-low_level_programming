#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_elf_header - Display information from the ELF header.
* @header: Pointer to the ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < 16; i++)
printf("%02x%s", header->e_ident[i], i == 15 ? "\n" : " ");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
break;
}
printf("  Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
		"UNIX - System V" : header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ?
		"UNIX - NetBSD" : header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ?
		"UNIX - Solaris" : "<unknown: 53>");
printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
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
printf("<unknown: %x>\n", header->e_type);
break;
}
printf("  Entry point address: 0x%lx\n", header->e_entry);
}

int main(int ac, char *av[])
{
int file;
Elf64_Ehdr header;

if (ac != 2)
{
dprintf(2, "Usage: %s elf_filename\n", av[0]);
exit(98);
}

file = open(av[1], O_RDONLY);
if (file == -1)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

if (read(file, &header, sizeof(header)) != sizeof(header))
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
close(file);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(2, "Error: Not an ELF file\n");
close(file);
exit(98);
}

print_elf_header(&header);

close(file);

return (0);
}

