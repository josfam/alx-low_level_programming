#include "main.h"
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 *                 output.
 * @filename: The text file to read.
 * @letters: The number of letters it should read and print.
 * Description: Reads a text file and prints it to the POSIX standard
 *              output.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int closed, fd, bufferSize, charsRead;
	size_t letterCount;
	ssize_t written;
	char buff[1];

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR, 777);
	if (fd == -1)
		return (0);

	/* read and write the necessary amount of letters */
	letterCount = 0;
	bufferSize = 1;
	charsRead = read(fd, buff, bufferSize);

	while ((letterCount <= letters) && (charsRead != 0))
	{
		written = write(STDOUT_FILENO, buff, bufferSize);
		if (written == -1) /* Handle a failed write */
			return (0);

		charsRead = read(fd, buff, bufferSize);
		letterCount++;
	}

	/* close the file*/
	closed = close(fd);
	if (closed == -1 || charsRead == -1)
		return (0);

	return (letterCount);
}
