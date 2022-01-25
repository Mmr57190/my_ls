/*
** EPITECH PROJECT, 2021
** my_score_r
** File description:
** my_score_r
*/

#include "stock_fnctn.h"

char **my_score_r(char **av, char *mask)
{
    char **res = malloc(sizeof(char *) * 100);
    struct dirent *dirent;
    DIR *dir = opendir(".");
    int j = 0;

    for (int i = 0; i < 100; i++)
        res[i] = malloc(sizeof(char *) * 100);
    while (dirent = readdir(dir)) {
        res[j] = my_strcpy(res[j], dirent->d_name);
        j++;
    }
    res[j] = NULL;
    if (mask[2] == '3')
        res = my_rev_r(res);
    return (res);
}

int size_score_r(char **res)
{
    int i = 0;

    for (; res[i] != NULL; i++);

    return (i);
}

char **my_rev_r(char **res)
{
    int i = size_score_r(res);

    i--;
    for (; i >= 0; i--)
        if (res[i][0] != '.')
            my_printf("%s\n", res[i]);
    return (res);
}
