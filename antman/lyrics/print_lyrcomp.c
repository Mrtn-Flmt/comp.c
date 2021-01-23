/*
** EPITECH PROJECT, 2021
** print_lyrcomp.c
** File description:
** printing the compressed lyrics
*/

#include "../../include/my.h"

void print_lyrcomp(char **cont, char **ind)
{
    int i;

    for (int i_cont = 0; cont[i_cont] != NULL; i_cont++) {
        i = 1;
        for (int i_ind = 0; str_compare(ind[i_ind], cont[i_cont]) == 0; i++, i_ind++);
        my_printf("%i ", i);
    }
    my_printf("\n");
}