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
 * Return: 1 if file exist, 0 if file does not exist
 */
ssize_t file_exist(char *file)
{
	ssize_t i, checkClose;

	i = open(file, O_RDONLY);
	if (i != -1)
		return (1);
	return (0);
	checkClose = close(i);
	if (checkClose == -1)
		close_fail(i);
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
	ssize_t fildes_dest, fildes_src, checkWrite, checkRead, checkClose;
	char *buff;

	/* open destition file for writing */
	fildes_dest = open(dest_file, O_WRONLY);
	if (fildes_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	/* open source file for reading */
	fildes_src = open(src_file, O_RDWR);

	buff = malloc(sizeof(char) * BUFFER);
	if (buff == NULL)
		return (-1);

	checkRead = read(fildes_src, buff, BUFFER);
	checkWrite = write(fildes_dest, buff, checkRead);
	if (checkWrite < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	free(buff);
	checkClose = close(fildes_dest);
	if (checkClose == -1)
		close_fail(fildes_dest);

	checkClose = close(fildes_src);
	if (checkClose == -1)
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
	ssize_t fildes_dest, fildes_src, checkWrite, checkRead, checkClose;
	char *buff;

	/* open destition file for writing */
	fildes_dest = open(dest_file, O_WRONLY | O_CREAT, 0664);
	if (fildes_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	/* open source file for reading */
	fildes_src = open(src_file, O_RDWR);

	buff = malloc(sizeof(char) * BUFFER);
	if (buff == NULL)
		return (-1);

	checkRead = read(fildes_src, buff, BUFFER);
	checkWrite = write(fildes_dest, buff, checkRead);
	if (checkWrite < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	free(buff);
	checkClose = close(fildes_dest);
	if (checkClose == -1)
		close_fail(fildes_dest);

	checkClose = close(fildes_src);
	if (checkClose == -1)
		close_fail(fildes_src);

	return (1);
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
	ssize_t checkDest, fildes, checkSrc, checkClose;
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

	/* check if source file exists */
	checkSrc = file_exist(argv[1]);
	if (checkSrc == 0)
	{
		dprintf(STDERR_FILENO, "Error: can read from file %s\n", argv[1]);
		exit(98);
	}

	/* check if destination file exits, then make copy */
	checkDest = file_exist(argv[2]);
	if (checkDest == 1)
	{
		fildes = open(argv[2], O_RDWR | O_TRUNC);
		checkClose = close(fildes);
		if (checkClose == -1)
			close_fail(fildes);
		create_copy_to_exist(argv[1], argv[2]);
		exit(0);
	}
	/* make copy if destination file doesn't exist */
	create_copy(argv[1], argv[2]);

	exit(0);
}
