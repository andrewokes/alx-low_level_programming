#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - To allocates 1024 bytes for a buffer.
* @file: Name of the file to buffer is storing chars for.
*
* Return: Pointer to the new allocated buffer.
*/
char *create_buffer(char *file)
{
char *new_buffer;

new_buffer = malloc(sizeof(char) * 1024);

if (new_buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (new_buffer);
}
/**
* close_file - A function that closes file descriptors.
* @ma: File descriptor to be closed.
*/
void close_file(int ma)
{
int k;

k = close(ma);

if (k == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ma);
exit(100);
}
}
/**
* main - To copy the contents of a file to another file.
* @argc: Number of arguments supplied to the program.
* @argv: Array of pointers to the arguments.
*
* Return: 0 (success).
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int from, to, i, j;
char *new_buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

new_buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
i = read(from, new_buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

for (; i > 0; i = read(from, new_buffer, 1024))
{
if (from == -1 || i == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(new_buffer);
exit(98);
}

j = write(to, new_buffer, i);
if (to == -1 || j == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(new_buffer);
exit(99);
}

to = open(argv[2], O_WRONLY | O_APPEND);
}

free(new_buffer);
close_file(from);
close_file(to);

return (0);
}
