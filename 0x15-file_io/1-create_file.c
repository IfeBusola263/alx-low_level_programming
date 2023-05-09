#include "main.h"
#include <string.h>
/**
 * file_exist - Checks if file exists
 * @file: file descriptor
 *
 * Return: 1 on success, 0 on failure
 */
ssize_t file_exist(const char *file)
{
	ssize_t fd;

	fd = open(file, O_RDONLY);
	if (fd != -1)
		return (1);
	close(fd);
	return (-1);
}
/**
 * check_ret - checks if fd is negative or positive
 * @fd: number to be checked
 *
 * Return: on failure -1
 */
int check_ret(ssize_t fd)
{
	if (fd < 0)
		return (-1);
	return (fd);
}

/**
 * create_file - make new file
 * @filename: name of the file
 * @text_content: string which is NULL terminated
 *
 * Return: on success 1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t checkWrite, fildes;

	if (filename == NULL)
		return (-1);

	/* file doesn't exist */
	if (file_exist(filename) == -1)
	{
		if (text_content == NULL)
		{
			fildes = open(filename, O_RDWR | O_CREAT, 0600);
			check_ret(fildes);
			close(fildes);
			return (1);
		}

		fildes = open(filename, O_RDWR | O_CREAT, 0600);
		if (check_ret(fildes) == -1)
			return (-1);
		checkWrite = write(fildes, text_content, strlen(text_content));
		check_ret(checkWrite);
		close(fildes);
		return (1);
	}

	if (text_content == NULL)
	{
		fildes = open(filename, O_WRONLY | O_TRUNC);
		(check_ret(fildes)
		close(fildes);
		return (1);
	}
	fildes = open(filename, O_WRONLY | O_TRUNC);
	if (check_ret(fildes) == -1)
		return (-1);
	checkWrite = write(fildes, text_content, strlen(text_content));
	check_ret(checkWrite);
	close(fildes);
	return (1);
}
