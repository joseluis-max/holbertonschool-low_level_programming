#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create a file
 * @filename: new name
 * @text_content: content for new file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int size = 0;
	int status;

	while  (text_content[size])
		size++;
	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT| O_WRONLY| O_TRUNC , 0600);
	if (file_descriptor != 3)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		status = write(file_descriptor, text_content, size);
		if (status == -1)
			return (-1);
	}
	return (1);
}
