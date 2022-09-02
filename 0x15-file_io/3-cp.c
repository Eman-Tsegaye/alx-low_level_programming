#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copies the contents of file_from to file_to
 * @argc: no of command line arguments
 * @argv: command line arguments
 * Return: 0 on pass
 */
int main(int argc, char *argv[])
{
	int file_to, file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
	{
		file_to = open(argv[2], O_CREAT | O_WRONLY, 00664);
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				 argv[2]);
			exit(99);
		}
	}
	file_copy(file_from, file_to, argv[1], argv[2]);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			 file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * file_copy - copies data from file_from to file_to
 * @file_from: file decsriptor of source
 * @file_to: file descriptor of dest
 * @from: name of source file
 * @to: name of dest file
 * Return: void (no return)
 */
void file_copy(int file_from, int file_to, char *from, char *to)
{
	ssize_t rd, wr;
	char buf[2048];

	while (1)
	{
		rd = read(file_from, buf, 2048);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", from);
			exit(98);
		}
		if (rd == 0)
			break;
		wr = write(file_to, buf, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to);
			exit(99);
		}
	}

}
