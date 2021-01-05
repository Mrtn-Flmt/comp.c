/*
** EPITECH PROJECT, 2020
** my_printf_checks.c
** File description:
** Chekcing functions for my_printf
*/

#include <stdarg.h>
#include "../../include/my.h"

int my_put_nbrbase(unsigned int nb, int base);
int my_putstr_all(char *str);

int flag_check(char c)
{
    switch (c) {
        case 'c' :
            return (0);
        case 's' :
            return (0);
        case '%' :
            return (0);
        case 'i' :
            return (0);
        case 'b' :
            return (0);
        case 'S' :
            return (0);
        case 'o' :
            return (0);
        default :
            return (-1);
    }
}

void flags(char c, va_list arg)
{
    switch (c) {
        case 'c' :
            my_putchar(va_arg(arg, int));
            break;
        case 's' :
            my_putstr(va_arg(arg, char *));
            break;
        case '%' :
            my_putchar('%');
            break;
        case 'i' :
            my_put_nbr(va_arg(arg, int));
            break;
        case 'b' :
            my_put_nbrbase(va_arg(arg, unsigned int), 2);
            break;
        case 'S' :
            my_putstr_all(va_arg(arg, char *));
            break;
    }
}

void flags_suite(char c, va_list arg)
{
    switch (c) {
        case 'o' :
            my_put_nbrbase(va_arg(arg, unsigned int), 8);
    }
}
