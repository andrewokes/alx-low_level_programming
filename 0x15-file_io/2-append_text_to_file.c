#include "main.h"

/**
* append_text_to_file - A function that appends text at the end of a file.
* @filename: Pointer to the name of the file.
* @text_content: String to add to the end of the file.
*
* Return: Should the function fail or filename is NULL - -1.
* when the file does not exist the user need write permissions - -1.
* Else  - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int i, j, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

i = open(filename, O_WRONLY | O_APPEND);
j = write(i, text_content, len);

if (i == -1 || j == -1)
return (-1);

close(i);

return (1);
}
