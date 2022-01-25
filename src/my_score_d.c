/*
** EPITECH PROJECT, 2021
** score_d
** File description:
** score_d
*/

#include "stock_fnctn.h"

void gest_color(char *str)
{
    my_putstr(str);
    my_putstr(BLUE);
    my_putstr(WHITE);
}

void my_score_d(int ac, char **av)
{
    int a = ac;

    for (int i = 2; i != ac; i++)
        if (i == a - 1)
            my_printf("%s\n", av[i]);
}
