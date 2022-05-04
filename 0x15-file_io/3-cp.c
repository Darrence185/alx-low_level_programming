#include "main.h"
#include "holberton.h"

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: arguments passed of type **char
 *
 * Description: takes only two arguments and copies the content(s)
 * of file_from to file_to
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fdr, fdw, r, c, cl;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fdr, buf, BUFSIZ)) > 0)
	{
		if (fdw < 0 || write(fdw, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdr);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c = close(fdr);
	cl = close(fdw);
	if (c < 0 || cl < 0)
	{
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (cl < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
