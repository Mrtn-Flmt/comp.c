/*
** EPITECH PROJECT, 2020
** get_content.c
** File description:
** get file's content
*/

#include "../../include/my.h"

char *get_content(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    struct stat st;

    stat(filepath, &st);
    buffer = malloc(sizeof(char) * st.st_size);
    read(fd, buffer, st.st_size);
    close(fd);
    return (buffer);
}