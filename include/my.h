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

char *get_content(char *filepath);

void lyr_comp(char *content);
void print_lyrcomp(char **content, char **index);
int str_compare(char *str1, char *str2);

void ppm_comp(char *str);