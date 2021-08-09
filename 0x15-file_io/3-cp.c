#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _error - print error
 * @num: number of error
 * @filename: name where is the error.
 * @status: int of close operation status
 */
void _error(int num, char *filename, int status)
{
	if (num == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (num == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
		exit(100);
	}
}
/**
 * main - copy file in other file
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: 1 or -1
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, status_close, status_close_2;
	char buffer[1024];
	char *file_name_to = argv[2];
	char *file_name_from = argv[1];
	ssize_t chars, status;

	if (argc != 3) /* ckeck if numbers arguments is correct */
		_error(97, "", 0);
	fd_from = open(file_name_from, O_RDONLY); /* open file from */
	if (fd_from == -1)
		_error(98, file_name_from, 0);
	fd_to = open(file_name_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fd_to == -1)
		_error(99, file_name_to, 0);
	do {
		chars = read(fd_from, buffer, 1024);
		if (chars == -1)
		_error(98, file_name_from, 0);
		status = write(fd_to, buffer, chars);
		if (status == -1)
		_error(99, file_name_to, 0);

	} while (status == 1024);
	status_close = close(fd_from);
	if (status_close == -1)
		_error(100, "", fd_from);
	status_close_2 = close(fd_to);
	if (status_close_2 == -1)
		_error(100, "", fd_from);
	return (0);
}
