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
    my_printf("STR_COMPARE\n");
    if (len1 != len2)
        return (0);
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] != str2[i])
            return (0);
    return (1);
}

int is_inIndex(char *word, char **index)
{
    my_printf("IS_ININDEX\n");
    for (int i = 0; index[i] != NULL; i++) {
        my_printf("\t\tIS_ININDEX >> FOR\n");
        if (str_compare(word, index[i]) == 1)
            return (1);
    }
    return (0);
}

char **indexing_strstr(char **content)
{
    char **index;
    int ind_i = 0;
    int cont_i = 0;

    index = malloc(sizeof(content));
    for (; content[cont_i] != NULL; cont_i++) {
        my_printf("INDEXING_STRSTR >> FOR\n");
        if (is_inIndex(content[cont_i], index) == 0) {
            my_printf("\tINDEXING_STRSTR >> FOR >> IF\n");
            index[ind_i] = malloc(sizeof(content[cont_i]));
            index[ind_i] = content[cont_i];
            index[ind_i + 1] = NULL;
            ind_i++;
        }
    }
    return (index);
}

void lyr_comp(char *content)
{
    char **index;
    char **strstr;

    strstr = str_to_strstr(content);
    index = indexing_strstr(strstr);
    for (int i = 0; index[i] != NULL; i++)
        my_printf("%s@", index[i]);
}