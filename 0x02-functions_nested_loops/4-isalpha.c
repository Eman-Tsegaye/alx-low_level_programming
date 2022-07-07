#include "main.h"
/**
 * _isalpha - checks if an input is an alphabet
 *
 *@i: to be verified
 * Return: return 0 or 1
 */
int _isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}
