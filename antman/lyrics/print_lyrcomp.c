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
    int iInd = 0;

    for (int iCont = 0; cont[iCont] != NULL; iCont++) {
        i = 1;
        while (str_compare(ind[iInd], cont[iCont]) == 0) {
            i++;
            iInd++;
        }
        my_printf("%i", i);
        if (cont[iCont + 1] != NULL)
            my_printf(" ");
    }
    my_printf("\n");
}