/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** My own printf function
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int flag_check(char c);
void flags(char c, va_list arg);
void flags_suite(char c, va_list arg);

int my_put_nbrbase(unsigned int nb, int base)
{
    int *arr;
    int i;
    int len;

    arr = malloc(sizeof(int) * nb);
    arr[0] = -2;
    for (i = 1; nb != 0; i++) {
        arr[i] = nb % base;
        nb = nb / base;
    }
    arr[i] = -2;
    for (len = 0; arr[len + 1] != -2; len ++);
    while (arr[len] != -2) {
        my_printf("%i", arr[len]);
        len--;
    }
    free(arr);
    return (0);
}

int my_putstr_all(char *str)
{
    if (str[0] == '\0')
        return (0);
    if (str[0] > 31 && str[0] < 127) {
        my_putchar(str[0]);
        return (my_putstr_all(&str[1]));
    } else {
        my_putchar(92);
        my_put_nbrbase(str[0], 8);
        return (my_putstr_all(&str[1]));
    }
}

int my_printf(const char *format, ...)
{
    va_list arg;

    va_start(arg, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && flag_check(format[i + 1]) == 0) {
            flags(format[i + 1], arg);
            flags_suite(format[i + 1], arg);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(arg);
    return (0);
}