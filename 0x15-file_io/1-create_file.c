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
	ssize_t i;

	i = open(file, O_RDONLY);
	if (i != -1)
		return (1);
	return (0);
	close(i);
}
/**
 * check_ret - checks if fd is negative or positive
 * @i: number to be checked
 *
 * Return: on failure -1
 */
int check_ret(ssize_t i)
{
	if (i < 0)
		return (-1);
	return (i);
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
	ssize_t checkWrite, fildes, checkRead;

	if (filename == NULL)
		return (-1);

	/* check if the file exists */
	checkRead = file_exist(filename);

	/* file doesn't exist */
	if (checkRead == 0)
	{
		if (text_content == NULL)
		{
			fildes = open(filename, O_RDWR | O_CREAT, 0600);
			check_ret(fildes);
			close(fildes);
			return (1);
		}

		fildes = open(filename, O_RDWR | O_CREAT, 0600);
		check_ret(fildes);
		checkWrite = write(fildes, text_content, strlen(text_content));
		check_ret(checkWrite);
		close(fildes);
		return (1);
	}

	if (text_content == NULL)
	{
		fildes = open(filename, O_RDWR | O_TRUNC);
		check_ret(fildes);
		close(fildes);
		return (1);
	}
	fildes = open(filename, O_RDWR | O_TRUNC);
	check_ret(fildes);
	checkWrite = write(fildes, text_content, strlen(text_content));
	check_ret(checkWrite);
	close(fildes);
	return (1);
}
