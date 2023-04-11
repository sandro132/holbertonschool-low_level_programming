#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name th file
 * @text_content: string to wtrite to the file
 * Return: number of characters
 */

int create_file(const char *filename, char *text_content)
{
	int i, f;

	if (filename == NULL)
		return (0);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	write(f, text_content, i);
	return (1);
}
