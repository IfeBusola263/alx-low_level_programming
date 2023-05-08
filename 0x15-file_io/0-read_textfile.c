#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads text from a file
 * @filename: file name
 * @letters: number of bytes to be written
 *
 * Return: on success number of letter read, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes, checkWrite, checkRead;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (-1);

	fildes = open(filename, O_RDONLY);

	if (fildes != -1)
	{
		checkRead = read(fildes, buff, letters);
		if (checkRead == -1)
			return (0);

		checkWrite = write(STDOUT_FILENO, buff, checkRead);
		if (checkWrite == -1 || checkWrite < (ssize_t)letters)
			return (0);

		close(fildes);
		return (checkWrite);
	}
	free(buff);
	return (0);

}
