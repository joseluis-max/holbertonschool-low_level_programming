#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	fd_to = open(file_name_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fd_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name_to);
	}
	fd_from = open(file_name_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_name_from);
	}
	chars = read(fd_from, buffer, 1024);
	if (chars == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_name_from);
	}
	status = write(fd_to, buffer, 1024);
	if (status == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name_to);
	}
	status_close = close(fd_from);
	if (status_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd_from);
		exit(100);
	}
	status_close_2 = close(fd_to);
	if (status_close_2 == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd_to);
	}
	return (0);
}
