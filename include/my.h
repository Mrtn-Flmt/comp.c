/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Library includes
*/

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
int my_strlen(const char *str);
int swap_char(char *str, char before, char after);
int fd_read(char const *filepath, int n);

void lyr_comp(char *content);