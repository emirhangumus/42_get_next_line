#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);
void *ft_calloc(size_t nmemb, size_t size);

#endif