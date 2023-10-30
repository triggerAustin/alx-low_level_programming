#include "main"

/**
 * append_text_to_file - function to append to file
 * @filename: name of file to append
 * @text_content: name of file written
 * Return: always successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, fdwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	length = 0;
	if (text_content == NULL)
		return (-1);

	while (text_content[length] != '\0')
	{
		length++;
	}

	fdwrite = write(fd, text_content, length);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
