/*
** EPITECH PROJECT, 2021
** lyr_comp.c
** File description:
** Compression of lyrics files
*/

#include "../../include/my.h"

char **str_to_strstr(char *arg)
{
    char **str;
    int av_len = my_strlen(arg);
    int spc_nbr = 0;
    int ptr_ind = 0;
    int cp = 0;

    for (int i = 0; i < av_len; i++)
        if (arg[i] == ' ' || '\n' || '\0')
            spc_nbr++;
    str = malloc(sizeof(char *) * spc_nbr);
    for (int i = 0; i <= av_len; i++)
        if (arg[i] == ' ' || arg[i] == '\0' || arg[i] == '\n') {
            str[ptr_ind] = malloc(sizeof(char) * (i - cp));
            for (int p = 0; cp < i && arg[cp] != ' ' && '\n'; cp++, p++)
                str[ptr_ind][p] = arg[cp];
            str[ptr_ind][cp] = '\0';
            ptr_ind++;
            cp++;
        }
    str[ptr_ind] = NULL;
    return (str);
}

int str_compare(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 != len2)
        return (0);
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] != str2[i])
            return (0);
    return (1);
}

int is_inIndex(char *word, char **index, int row)
{
    int w_len = my_strlen(word);
    int i_len;

    for (int i = 0; index[i] != NULL && i < row; i++) {
        i_len = my_strlen(index[i]);
        if (w_len == i_len && str_compare(word, index[i]) == 1)
            return (1);
    }
    return (0);
}

char **indexing_strstr(char **content)
{
    char **index;
    int i;

    index = malloc(sizeof(content));
    for (i = 0; content[i] != NULL; i++)
        if (is_inIndex(content[i], index, i + 1) == 0) {
            index[i] = malloc(sizeof(content[i]));
            index[i] = content[i];
        }
    index[i] = NULL;
    return (index);
}

void lyr_comp(char *content)
{
    char **index;

    index = indexing_strstr(str_to_strstr(content));
}