/*
** EPITECH PROJECT, 2020
** test strlen$
** File description:
** test strlen
*/

int my_strlen(char const *str)
{
    int len;

    len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return (len);
}
