#include"main.h"

/**
 * read_textfile-Reads text files
 * @filename:file name
 * @letters:number of letters
 * Return:number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	fo = open(filename, O_RDONLY);

	if (fo < 0)
	{
		free(buf);
		return (0);
	}

	fr = read(fo, buf, letters);
	if (fr < 0)
	{
		free(buf);
		return (0);
	}

	fw = write(STDOUT_FILENO, buf, fr);
	free(buf);
	close(fo);

	if (fw <= 0)
		return (0);
	close(fo);
return (fw);
}
