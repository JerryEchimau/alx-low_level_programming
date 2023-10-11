#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

/* standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_msg(int exit_code, const char *format, ...);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
