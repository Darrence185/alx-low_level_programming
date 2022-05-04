#include "main.h"
#include "holberton.h"

/**
* read_text_file - reads a text file and prints it to the standard output
*@filename: name of the file to be read
*@letters: number of letters to read and print
*
*Return: the number of letters printed, or 0 if it failed 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    int _r, _w;
    char *buf;

    if (!filename)
          return (0);

    fd = open(filename, O_RDONLY);
    if (fd < 0)
          return (0);

    buf = malloc(sizeof(char) * letters);
    if (!buf)
          return (0);

    _r = read(fd, buf, letters);
    if (_r < 0)
    {
          free(buf);
          return (0);
    } 
    buf[_r] = '\0';

    close(fd);

    _w = write(STDOUT_FILENO, buf, _r);
    if (_w < 0)
    {
        free(buf);
        return (0);
    }

    free(buf);
    return(_w);
}