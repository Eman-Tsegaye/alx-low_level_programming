#include"main.h"

/**
 * append_text_to_file-Reads text files
 * @filename:file name
 * @text_content:text to append
 * Return:integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fa, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fo = open(filename, O_RDWR | O_APPEND);

		if (fo <= 0)
			return (-1);
		close(fo);
		return (1);
	}
	else
	{
		while (text_content[i] != '\0')
			i += 1;

		fo = open(filename, O_RDWR | O_APPEND);
		fa = write(fo, text_content, i);
		if (fa <= 0)
			return (-1);
		close(fo);
		return (1);
	}

}
