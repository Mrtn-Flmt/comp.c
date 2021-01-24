/*
** EPITECH PROJECT, 2021
** ppm_comp.c
** File description:
** Compression of image files
*/

#include "../../include/my.h"
#include <unistd.h>

void add(char *content, int i)
{
    int a = content[i+1] - 48;
    int b = content[i+2] - 48;
    a *= 10;
    int c = a + b;

    if (c >= 58 && c <= 122)
        my_printf("%c", c);
    else
        my_printf("%c%c", content[i+1], content[i+2]);
}

void display(char *content, int i)
{
        my_putchar(content[i]);
        add(content, i);
}

void my_crypt(char *content)
{
    for (int i = 0; content[i] != '\0'; i++) {
        if (content[i] >= '0' && content[i] <= '9'
            && content[i + 1] >= '0' && content[i + 1] <= '9'
            && content[i + 2] >= '0' && content[i + 2] <= '9') {
                display(content, i);
                i += 2;
        } else
            my_putchar(content[i]);
    }
}

void ppm_comp(char *path)
{
    char *file_content = get_content(path);
    my_crypt(file_content);
}