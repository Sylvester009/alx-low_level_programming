#include "main.h"

/**
* create_file - creates a file
* @filename: filename.
* @text_content: content written in the file.
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd;
int length;
int written;

if (!filename)
{
return (-1);
}

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
else
{
text_content = "";
length = 0;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
