#ifndef MAIN_h
#define MAIN_h

#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include"main.h"
#include<stddef.h>
#include<stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif