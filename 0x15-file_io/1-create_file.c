#include "main.h"

/**
* create_file - a function that creates a file.
* @filename: The pointer to the name of the file to create.
* @text_content: The pointer to a string to write to the file.
*
* Return: Should the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int ma, i, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

ma = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
i = write(ma, text_content, len);

if (ma == -1 || i == -1)
return (-1);

close(ma);

return (1);
}
