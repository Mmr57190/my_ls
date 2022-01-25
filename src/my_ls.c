/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** my_ls
*/

#include "stock_fnctn.h"

int find_name(char *str)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int y = 0;
    char *tmp = malloc(sizeof(char) * my_strlen(str));

    for (int x = 0; str[x] != '\0'; x++)
        if (str[x] == '/')
            cnt1++;
    if (cnt1 == 0)
        my_printf(" %s\n", str);
    else {
        sous_fnctn(str);
    }
    return (0);
}

int find_size(char *str)
{
    struct stat infrm;

    stat(str, &infrm);
    my_printf(" %d ", infrm.st_size);
    return (infrm.st_size);
}

char find_type(char *str)
{
    file_type1(str);
    file_type2(str);
}

void display(char *str)
{
    find_name(str);
    find_type(str);
    find_size(str);
}

void my_total_l(char *file)
{
    struct dirent *dirent;
    struct stat data;
    DIR *dir = opendir(file);
    int nb = 0;
    int total = 0;
    char *res = NULL;

    while (dirent = readdir(dir)) {
        if (dirent->d_name[0] == '.')
            continue;
        res = enter_directory(file, dirent->d_name);
        stat(res, &data);
        nb = data.st_blocks;
        total = nb + total;
        free(res);
    }
    my_printf("%s", "total ");
    my_printf("%d\n", total / 2);
    closedir(dir);
}
