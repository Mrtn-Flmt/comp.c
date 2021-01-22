/*
** EPITECH PROJECT, 2021
** ppm_comp.c
** File description:
** Compression of image files
*/

#include "../../include/my.h"
#include <unistd.h>

int add(char *content_1, char *content_2)
{
    int a = content_1 - 48;
    int b = content_2 - 48;
    a *= 10;
    int c = a + b;

    my_printf("%c\n", c + 48);
    return (c);
}

void my_crypt(char *content, char c)
{
    for (int i = 0; content[i] != '\0'; i++) {
        if (content[i] == '0') {
            my_putchar(content[i]);
            add(content[i+1], content[i+2]);
            i += 3;
        } else if (content[i] == '1') {
            my_putchar(content[i]);
            add(content[i+1], content[i+2]);
            i += 3;
        } else if (content[i] == '2') {
            my_putchar(content[i]);
            add(content[i+1], content[i+2]);
            i += 3;
        }
    }
}

void ppm_comp(char *path)
{
    char *file_content = get_content(path);
    my_crypt(file_content, '2');
}