/*
** EPITECH PROJECT, 2021
** ppm_comp.c
** File description:
** Compression of image files
*/

#include "../../include/my.h"
#include <unistd.h>

void my_crypt(char *content, char c)
{
    for (int i = 0; content[i] != '\0'; i++) {
        if (content[i] == c && content[i + 1] == '5'
            && content[i + 2] == '5') {
            my_putchar('o');
            i += 2;
            } else
            my_putchar(content[i]);
    }
}

void ppm_comp(char *path)
{
    char *file_content = get_content(path);
    my_crypt(file_content, '2');

}