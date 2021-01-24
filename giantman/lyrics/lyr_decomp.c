/*
** EPITECH PROJECT, 2021
** lyr_decomp.c
** File description:
** lyrics decompression
*/

#include "../../include/my.h"

char **get_index(char *con)
{
    char **index;
    int size = 0;
    int iInd = 0;
    int cp = 0;

    for (int i = 0; i < my_strlen(con); i++)
        if (con[i] == '@')
            size++;
    index = malloc(sizeof(char *) * size);
    for (int i = 0; i <= my_strlen(con); i++)
        if (con[i] == '@') {
            index[iInd] = malloc(sizeof(char) * (i - cp));
            for (int p = 0; cp < i && con[cp] != '@'; cp++, p++)
                index[iInd][p] = con[cp];
            index[iInd][cp] = '\0';
            iInd++;
            cp++;
        }
    index[iInd] = NULL;
    return (index);
}

void lyr_decomp(char *content)
{
    char **index;

    index = get_index(content);
    for (int i = 0; index[i] != NULL; i++)
        my_printf("%s ", index[i]);
}