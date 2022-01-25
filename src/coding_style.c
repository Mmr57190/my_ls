/*
** EPITECH PROJECT, 2021
** coding_style
** File description:
** coding_style
*/

#include "stock_fnctn.h"

void call_function(char **av, int i)
{
    struct stat ex;

    right_to_l(ex);
    my_after_right(ex);
    my_user(ex);
    find_size(av[i]);
    find_date(ctime(&ex.st_ctime));
    find_name(av[i]);
    if (av[i + 1] != NULL)
        my_putchar('\n');
}
