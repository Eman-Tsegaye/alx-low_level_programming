#include "stdio.h"
/**
 * main-counts the length of a string
 * @len:integer
 * Return:always 0
 */

void main(void)
{

        int i, j;
        int len = 0;
        char *new;
	char *s={"eman"};

        j = 0;

        while (*(s + len) != '\0')
        {
                len++;
        }
        for (i = len - 1; i >= 0 ; i--)
        {
                new[j] = *(s + i);
                j++;
        }
         new[len] = '\0';
       /* _putchar('\n');*/
	printf("%p\n",*s);


}

