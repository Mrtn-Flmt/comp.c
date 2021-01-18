/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** The main file of the Giantman decompression binary
*/

#include "../include/my.h"

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

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    return (0);
}
