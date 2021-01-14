/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** test my_strlen
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
