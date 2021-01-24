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

int get_size(char *content, int index)
{
    int i = 0;

    while (content[index] != ' ' && '@')
        i++;
    return (i);
}

char **get_suite(char *content)
{
    char **suite;
    int size = 0;

    for (int i = 0; i < my_strlen(content); i++)
        if (content[i] == ' ')
            size++;
    suite = malloc(sizeof(char *) * (size + 1);
    for (int i = 0; content[i] != '\0'; i++) {
        if (content[i] == ' ')
    }
}

void lyr_decomp(char *content)
{
    char **index;
    char **suite;

    index = get_index(content);
    suite = get_suite(content);
}