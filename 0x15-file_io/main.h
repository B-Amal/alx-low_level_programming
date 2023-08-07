#ifndef HEAD_H
#define HEAD_H

#define ERR_FILE_READ 98
#define ERR_FILE_WRITE 99
#define ERR_FILE_CLOSE 100
#define ERR_USAGE 97
#define ERR_FILE -1
#define BUFFER_SIZE 1024


#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
