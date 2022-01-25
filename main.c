/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "stock_fnctn.h"

void gest_mask(int ac, char **av)
{
    char *mask = malloc(sizeof(char) * 6);
    mask = value_to_count(av, mask, ac);
    char **file = NULL;

    if (mask[0] == '1')
        my_score_l(ac, av, mask, file);
    if (mask[1] == '2')
        my_score_d(ac, av);
    if (mask[2] == '3')
        my_score_r(av, mask);
    if (mask[3] == '4')
        my_score_r_maj(av);
}

int main(int ac, char **av)
{
    struct dirent *dirent;
    struct stat data;
    DIR *dir = opendir(".");
    char *mask = malloc(sizeof(char) * 6);
    char **file = NULL;

    mask = value_to_count(av, mask, ac);
    if (ac == 1) {
        display_without_flag(ac, ".", 1);
        return (0);
    } else if (ac > 1 && av[1][0] != '-') {
        display_many(ac, av);
        return (0);
    } else
        gest_mask(ac, av);
    return (0);
}
