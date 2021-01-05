/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr function
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int a;

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9){
        my_put_nbr(nb/10);
    }
    a = nb % 10 + 48;
    my_putchar(a);
    return (0);
}

