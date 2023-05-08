#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: The number of letters
 * Return: The number of bytes actually written to the standard output.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

n_read = read(fd, buffer, letters);
if (n_read == -1)
return (0);

n_written = write(STDOUT_FILENO, buffer, n_read);
if (n_written == -1 || n_written != n_read)
return (0);

free(buffer);
close(fd);

return (n_written);
}
