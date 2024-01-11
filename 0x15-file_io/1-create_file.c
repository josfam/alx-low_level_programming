#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: The null terminated string to write to the file.
 * Description: Creates a file.
 * Return: 1 on success, 1 on failure (file can not be created,
 *         file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, closed;
	int exists;
	struct stat stat_info;

	if (!filename)
		return -1;

	exists = stat(filename, &stat_info);

	/* truncate file if it already exists */
	if (exists == 0)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		close(fd);
		return (1);
	}

	/* truncate already existing file, but do not change permissions */
	if (!text_content) /* create an empty file */
	{
		fd = open(filename, O_RDWR | O_CREAT);
		/* handle open and close failure */
		closed = close(fd);
		if (fd == -1 || closed == -1)
			return -1;
	}

	/* open the file and write to it */
	fd = open(filename, O_RDWR | O_CREAT, 700);

	closed = close(fd);
	if (fd == -1 || closed == -1)
		return (-1);
}
