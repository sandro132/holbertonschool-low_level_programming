#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: char string
 * @letters: numbers of letters
 * Return: numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, l, w;
	char *buf;

	buf = malloc(sizeof(letters));

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	l = read(file, buf, letters);
	w = write(STDOUT_FILENO, buf, l);
	close(file);
	return (w);
}
