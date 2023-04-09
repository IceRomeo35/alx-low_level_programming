#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - Read text file
 *                 and prints it to the POSIX standard output
 * *@filename: text file being read
 * *@letters: number of letters to be read and printed.
 * Return: w- actual number of bytes read and printed
 *         0 if the file can not be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declaration of variables*/
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t n;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	n = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, n);

	free(buf);
	close(fd);
	return (w);
}
