/*
** EPITECH PROJECT, 2020
** swap_char.c
** File description:
** swap 2 char
*/

#include "./../../include/my.h"

int swap_char(char *str, char before, char after)
{
    int i = 0;
    int y = 0;
    int len = my_strlen(str);
    int *changed;
    int i_changed;

    while (str[i] != '\0') {
        if (str[i] == before) {
            str[i] = after;
            my_putchar(str[i]);
            i++;
            y++;
        } else {
            my_putchar(str[i]);
            i++;
        }
    }
    my_putchar('\n');
    return (y);
}