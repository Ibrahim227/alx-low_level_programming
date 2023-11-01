#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

ssize_t read_textfile(const char *filename, size_t let);
int _putchar(char c);
int append_text_to_file(const char *filename, char *txt_content);
int create_file(const char *filename, char *txt_content);
#endif
