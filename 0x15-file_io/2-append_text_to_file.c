#include "main.h"
#include "holberton.h"
/**
 * append_text_to_file - append text to an existing file
 * @filename: name of file to add text data to
 * @text_content: string to copy to file
 *
 * Description: add text to an existing file
 * Return: 1 on success , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		w = write(fd, text_content, i);
		if (w != i)
			return (-1);
	}
	close(fd);
	return (1);
}
