#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_file - concat text in file
 * @filename: file for concat
 * @text_content: new sting
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int status = 0;
	int file_description;
	int size;

	if (filename == NULL)
		return (-1);
	file_description = open(filename, O_WRONLY | O_APPEND);
	if (file_description == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
		status = write(file_description, text_content, size);
		if (status == -1)
			return (-1);
	}
	return (1);
}
