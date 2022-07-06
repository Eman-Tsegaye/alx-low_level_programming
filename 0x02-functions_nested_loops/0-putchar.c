#include "main.h"
/**
 * main - Prints putchar
 *
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char* eman="_putchar";
        for(i=0;i<8;i++)
                _putchar(eman[i]);
        _putchar('\n');
        return(0);
}
