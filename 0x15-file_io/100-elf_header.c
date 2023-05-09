#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define BUFFER 1024
/**
 * main - entry point of the program
 * @argc: counts number of arguments
 * @argv: take strings of argument
 *
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int fildes;
	char buffer[BUFFER];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fildes = open(argv[1], O_RDONLY);
	if (fildes == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}

	lseek(fildes, 0, SEEK_SET);
	read(fildes, buffer, 1024);
	printf("%s\n", buffer);
	close(fildes);
	return (0);
}
