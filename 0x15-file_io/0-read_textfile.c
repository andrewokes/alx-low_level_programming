#include "main.h"
#include <stdlib.h>

/**
* read_textfile- To read text file print to STDOUT.
* @filename: the text file being read
* @letters: the number of letters to be read
* Return: i- the actual number of bytes read and printed
* 0 when the function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *cal;
ssize_t ma;
ssize_t i;
ssize_t j;

ma = open(filename, O_RDONLY);
if (ma == -1)
return (0);
cal = malloc(sizeof(char) * letters);
j = read(ma, cal, letters);
i = write(STDOUT_FILENO, cal, j);

free(cal);
close(ma);
return (i);
}
