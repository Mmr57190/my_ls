/*
** EPITECH PROJECT, 2021
** gest_filter
** File description:
** gest_filter
*/

#include "stock_fnctn.h"

int gest_filter(char **av, struct dirent *dirent)
{
    for (int x = 2; av[x] != NULL; x++)
        if (my_strcmp(av[x], dirent->d_name) != 0)
            return (1);
    return (0);
}

int filter_simple(char **av, char *file_nrml)
{
    for (int x = 1; av[x] != NULL; x++)
        if (my_strcmp(av[x], file_nrml) != 0)
            return (1);
    return (0);
}

void display_without_flag(int ac, char *file, int choice)
{
    DIR *fichiers = NULL;
    struct dirent *info = NULL;
    struct stat ex;

    if (choice == 1)
        fichiers = opendir(".");
    else if (choice == 2)
        fichiers = opendir(file);
    stat(file, &ex);
    if (ac > 2 && S_ISDIR(ex.st_mode))
        my_printf("%s:\n", file);
    if (S_ISDIR(ex.st_mode)) {
        for (int y = 0; info = readdir(fichiers); y++) {
            if (info->d_name[0] != '.')
                my_printf("%s\n", info->d_name);
        }
    } else
        my_printf("%s\n", file);
}

void gest_many_directory(char **av, int i, DIR *folder)
{
    struct dirent *info = NULL;
    struct stat ex;
    char *res = NULL;

    for (int y = 0; info = readdir(folder); y++) {
        if (info->d_name[0] != '.') {
            res = enter_directory(av[i], info->d_name);
            stat(res, &ex);
            right_to_l(ex);
            my_after_right(ex);
            my_user(ex);
            find_size(res);
            find_date(ctime(&ex.st_ctime));
            find_name(info->d_name);
            free(res);
        }
    }
}

void gest_ac_two(char **av, int i, DIR *dir)
{
    struct dirent *dirent;
    struct stat data;
    dir = opendir(".");

    my_total_l(".");
        while (dirent = readdir(dir)) {
            if (dirent->d_name[0] != '.' && gest_filter(av, dirent) == 0) {
                stat(dirent->d_name, &data);
                right_to_l(data);
                my_after_right(data);
                my_user(data);
                find_size(dirent->d_name);
                find_date(ctime(&data.st_ctime));
                find_name(dirent->d_name);
            }
        }
        i++;
}