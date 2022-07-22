#include "main.h"
/**
 * _strpbrk-returns the number of bytes in the initial segment of a string
 *@s:string
 *@accept:list
 *Return:integer
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i, j, sum, len;

        i = 0;
        sum = 0;
        len = 0;
        j = 0;

        /*while (*(accept + len) != '\0')*/
        while ((s[len] >= 65 && s[len] <= 90) || (s[len] >= 97 && s[len] <= 122))
                len += 1;

        while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
                while (j < len)
                {
                        if (accept[i] == s[j])
                        {
                                sum += 1;
                        }
                        j += 1;
                }
                i += 1;
                j = 0;
        }
        return (sum);
}
