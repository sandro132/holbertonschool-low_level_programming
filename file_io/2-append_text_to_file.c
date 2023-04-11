#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a fil
 * @filename: is the name of the file
 * @text_content: content all text
 * Return: (1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	write(f, text_content, i);
	return (1);
}
