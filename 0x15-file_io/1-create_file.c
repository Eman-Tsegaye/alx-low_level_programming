#include "main.h"
/**
 * create_file-creates a file
 * @filename:name of the file
 * @text_content:string to be written
 * Return:integer
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, i = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[i])
		i += 1;

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fo < 0)
		return (-1);

	fw = write(fo, text_content, i);
	close(fo);

	if (fw < 0)
		return (-1);
	return (1);
}
