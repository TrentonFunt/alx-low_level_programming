#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024



/* Function prototypes for c files */

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int _putchar(char c);

/* Function prototypes */

void handle_error(int exit_code, const char *message);

int open_source_file(const char *filename);

int open_destination_file(const char *filename);

void copy_file(int origin_fl, int dest_fl);

#endif /* MAIN_H */
