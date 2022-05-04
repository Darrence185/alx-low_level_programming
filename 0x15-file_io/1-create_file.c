#include "main.h"
#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to created file
 *
 * Description: create a file with rw permissions, if
 * file exists do not change the permissions
 * Return: 1 on success , -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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