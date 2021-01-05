/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** Task02 of the fourth day
*/

void my_putchar(char c);

int my_putstr(char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
