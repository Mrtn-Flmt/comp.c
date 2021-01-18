/*
** EPITECH PROJECT, 2020
** swap_char.c
** File description:
** swap 2 char
*/

#include "./../../include/my.h"

int swap_char(char *str, char before, char after)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == before) {
            str[i] = after;
            y++;
        }
    }
    return (y);
}
