/*
** EPITECH PROJECT, 2021
** sous_fnctn
** File description:
** sous_fnctn
*/

#include "stock_fnctn.h"

int sous_fnctn(char *str)
{
    int cnt1 = 0;
    int cnt2 = 0;
    char *tmp = malloc(sizeof(char) * 10000);
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '/')
            cnt2++;
        if (cnt2 >= cnt1) {
            if (str[i] == '/') {
            } else {
                tmp[y] = str[i];
                y++;
            }
        }
        tmp[y] = '\0';
        my_printf(" %s\n", tmp);
    }
    return (0);
}

int file_type1(char *str)
{
    struct stat inf;

    stat(str, &inf);
    switch (inf.st_mode & S_IFMT) {
        case S_IFBLK:
            my_printf(" b\n");
            break;
        case S_IFCHR:
            my_printf(" c\n");
            break;
        case S_IFDIR:
            my_printf(" d\n");
            break;
    }
    return (0);
}

int file_type2(char *str)
{
    struct stat inf;

    stat(str, &inf);
    switch (inf.st_mode & S_IFMT) {
    case S_IFREG:
            my_printf(" f\n");
            break;
        case S_IFSOCK:
            my_printf(" socket\n");
            break;
        default:
            my_printf(" inconnu\n");
            break;
    }
    return (0);
}

int my_after_right(struct stat data)
{
    my_printf("%d", data.st_nlink);
}
