/*
** EPITECH PROJECT, 2021
** my_score_r_maj
** File description:
** my_score_r_maj
*/

#include "stock_fnctn.h"

void gest_rmaj(char **av, DIR *folder)
{
    struct dirent *info = NULL;
    struct stat ex;

    for (int y = 0; info = readdir(folder); y++) {
        if (info->d_name[0] != '.')
            my_printf("%s\n", info->d_name);
    }
}

int my_score_r_maj(char **av)
{
    struct dirent *dirent;
    DIR *dir = opendir(".");
    struct dirent *info = NULL;
    struct stat ex;
    DIR *folder;
    int i = 0;

    for (int c = 0; dirent = readdir(dir);) {
        if (dirent->d_name[0] != '.' && gest_filter(av, dirent) == 0) {
            stat(dirent->d_name, &ex);
            if (S_ISDIR(ex.st_mode)) {
                if (av[i + 1] != NULL)
                    if (c != 0)
                        my_putchar('\n');
                    my_printf("%s:\n", dirent->d_name);
                if (S_ISDIR(ex.st_mode))
                folder = opendir(dirent->d_name);
                if (folder == NULL)
                    exit(84);
                gest_rmaj(av, folder);
                c++;
            }
        }
    }
    i++;
}
