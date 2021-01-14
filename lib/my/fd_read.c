/*
** EPITECH PROJECT, 2020
** fd_read.c
** File description:
** read in file
*/

#include "../../include/my.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

int fd_read(char const *filepath, int n)
{
    if (filepath != NULL) {
        int fd = open(filepath, O_RDONLY);
        //char *in = malloc(sizeof(int)*my_strlen(fd));
        char in[100];
        read(fd, in, n);
        my_printf("%s\n", in);
        close(fd);
        return (0);
    } else {
        return (84);
    }
}