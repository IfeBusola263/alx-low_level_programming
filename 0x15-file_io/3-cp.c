#include "main.h"
#include <stdio.h>
#define BUFFER 1024
/**
 * close_fail - exits if close can't be executed
 * @fd: file which couldn't close
 *
 * Return: exit with int 100
 */
void close_fail(ssize_t fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", fd);
	exit(100);
}

/**
 * file_exist - Checks if file exists
 * @file: file descriptor
 *
 * Return: 0 if file exist, -1 if file does not exist
 */
ssize_t file_exist(char *file)
{
	ssize_t fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (close(fd) == -1)
		close_fail(fd);
	return (fd);
}

/**
 * create_copy_to_exist - creates copy of a file
 * @src_file: filename of source file
 * @dest_file: file name of destination file
 *
 * Return: upon success
 */
ssize_t create_copy_to_exist(char *src_file, char *dest_file)
{
	ssize_t fildes_dest, fildes_src, checkWrite, checkRead;
	char buff[BUFFER];

	/* open source file for reading */
	fildes_src = open(src_file, O_RDONLY);
	if (fildes_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: can read from file %s\n", src_file);
		exit(98);
	}

	/* open destition file for writing */
	fildes_dest = open(dest_file, O_WRONLY);
	if (fildes_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	while ((checkRead = read(fildes_src, buff, BUFFER)) != 0)
		checkWrite = write(fildes_dest, buff, checkRead);
	if (checkWrite < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	if (close(fildes_dest) == -1)
		close_fail(fildes_dest);

	if (close(fildes_src) == -1)
		close_fail(fildes_src);
	return (1);
}
/**
 * create_copy - creates copy of a file
 * @src_file: filename of source file
 * @dest_file: file name of destination file
 *
 * Return: upon success
 */
ssize_t create_copy(char *src_file, char *dest_file)
{
	ssize_t fildes_dest, fildes_src, checkWrite, checkRead;
	char buff[BUFFER];

	/* open source file for reading */
	fildes_src = open(src_file, O_RDONLY);
	if (fildes_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: can read from file %s\n", src_file);
		exit(98);
	}

	/* open destition file for writing */
	fildes_dest = open(dest_file, O_WRONLY | O_CREAT, 0664);
	if (fildes_dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	while ((checkRead = read(fildes_src, buff, BUFFER)) != 0)
		checkWrite = write(fildes_dest, buff, checkRead);
	if (checkWrite < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	if (close(fildes_dest) == -1)
		close_fail(fildes_dest);

	if (close(fildes_src) == -1)
		close_fail(fildes_src);

	return (-1);
}

/**
 * main - program entry point
 * @argc: counts number of inputs
 * @argv: array of strings.
 *
 * Return: return 0 on success, 98 other wise
 */
int main(int argc, char **argv)
{
	ssize_t checkDest, fildes, checkSrc;
	int i;

	if (argc != 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	for (i = 0; argv[i]; i++)
	{
		if (argv[i] == NULL)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
	}

	if ((file_exist(argv[1])) == -1) /* check if source file exists */
	{
		dprintf(STDERR_FILENO, "Error: can read from file %s\n", argv[1]);
		exit(98);
	}

	if ((file_exist(argv[2])) > 2)  /* check if dest file exits, then copy */
	{
		fildes = open(argv[2], O_WRONLY | O_TRUNC)
		if (fildes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
		if (close(fildes) == -1)
			close_fail(fildes);
		create_copy_to_exist(argv[1], argv[2]);
		exit(0);
	}
	create_copy(argv[1], argv[2]); /* make copy if dest file doesn't exist */
	exit(0);
}
