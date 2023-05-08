#include "main.h"
#include <string.h>
/**
 * file_exist - Checks if file exists
 * @file: file descriptor
 *
 * Return: 1 if file exist, 0 if file does not exist
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
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text with null terminating byte
 *
 * Return: on success 1, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t checkRead, fildes, checkWrite;

	if (filename == NULL)
		return (-1);

	/* check if file exists */
	checkRead = file_exist(filename);

	if (checkRead == 1)
	{
		/* check if text_content is NULL */
		if (text_content == NULL)
			return (1);

		fildes = open(filename, O_WRONLY | O_APPEND);
		if (fildes == -1)
			return (-1);

		checkWrite = write(fildes, text_content, strlen(text_content));
		if (checkWrite < 0)
			return (-1);

		close(fildes);
	}
	return (-1);
}
