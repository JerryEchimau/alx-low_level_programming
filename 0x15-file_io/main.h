#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

/* prototypes */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message, const char *arg);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);
void copy_file(int fd_from, int fd_to);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
