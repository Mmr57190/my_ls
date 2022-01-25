/*
** EPITECH PROJECT, 2021
** char_to_mask
** File description:
** char_to_mask
*/

#include "stock_fnctn.h"
#include <string.h>

char *value_to_count(char **av, char *count, int ac)
{
    for (int i = 0; i < 5; i++)
        count[i] = '0';
    count[5] = '\0';
    for (int i = 1; i < ac; i++) {
        for (int j = 1; av[j] != NULL; j++) {
            if (av[i][j - 1] == '-' && av[i][j] == 'l')
                count[0] = '1';
            if (av[i][j - 1] == '-' && av[i][j] == 'd')
                count[1] = '2';
            if (av[i][j - 1] == '-' && av[i][j] == 'r')
                count[2] = '3';
            if (av[i][j - 1] == '-' && av[i][j] == 'R')
                count[3] = '4';
            if (av[i][j] == 't')
                count[4] = '5';
        }
    }
    return (count);
}

char *enter_directory(char *one, char *end)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *res = NULL;

    for (; one[i]; i++);
    for (; end[j]; j++);
    if (one[i - 1] != '/')
        k++;
    res = malloc(sizeof(char) * (i + j + k + 1));
    res = my_strcpy(res, one);
    if (k == 1)
        res = my_strcat(res, "/");
    res = my_strcat(res, end);
    return (res);
}

void display_many(int ac, char **av)
{
    DIR *fichiers = opendir(".");
    struct dirent *info = NULL;
    struct stat ex;

    for (int i = 1; av[i] != NULL; i++) {
        display_without_flag(ac, av[i], 2);
        if (av[i + 1] != NULL)
            my_putchar('\n');
    }
}
