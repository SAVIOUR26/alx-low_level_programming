#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read the text file and print it to STDOUT.
 * @filename: The text file is being read
 * @letters: for the no. of letters that are to be read
 * Return: w- real no. of bytes read & printed
 *        0 is when the funct. fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

