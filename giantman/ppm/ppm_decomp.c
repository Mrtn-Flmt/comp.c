/*
** EPITECH PROJECT, 2021
** ppm_decomp.c
** File description:
** ppm decompression
*/

#include "../../include/my.h"

void add(char *content, int i)
{
    int y = content[i + 1];
    my_printf("%i", y);
}

void decrypt(char *content)
{
    for (int i = 0; content[i] != '\0'; i++) {
        if (content[i] >= '0' && content[i] <= '9'
            && content[i + 1] >= 58 && content[i + 1] <= 122) {
                my_putchar(content[i]);
                add(content, i);
                i++;
            } else {
                my_putchar(content[i]);
            }
    }
}

void ppm_decomp(char *path)
{
    char *file_content = get_content(path);
    decrypt(file_content);
}