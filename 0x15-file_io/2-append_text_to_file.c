#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of the file
* @text_content: text to be appended
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int length;
int written;

if (filename == NULL)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}

for (length = 0; text_content[length];)
length++;

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

written = write(fd, text_content, length);

if (written == -1 || written != length)
{

return (-1);
}

close(fd);

return (1);
}
