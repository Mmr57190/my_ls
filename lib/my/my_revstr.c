/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** revstr
*/

#include "my.h"

void my_char_swap(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int i = 0;
    int x = 1;

    while (i < my_strlen(str) / 2) {
        my_char_swap(&str[i], &str[my_strlen(str) - x]);
        i++;
        x++;
    }
    return (str);
}
