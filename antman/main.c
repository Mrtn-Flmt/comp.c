/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** The main file of Antman compression binary
*/

#include "../include/my.h"

int open_test(char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == 0) {
        close (fd);
        return (84);
    }
    close(fd);
    return (0);
}

int main (int ac, char **av)
{
    if (ac != 3 || open_test(av[1]) == 84 ||
    my_strlen(av[2]) != 1)
        return (84);
    if (av[2][0] == '1' && av[2][1] == '\0')
        lyr_comp(get_content(av[1]));
    if (av[2][0] == '3' && av[2][1] == '\0')
        ppm_comp(av[1]);
    return (0);
}