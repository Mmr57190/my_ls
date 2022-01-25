/*
** EPITECH PROJECT, 2021
** gest_error
** File description:
** gest_error
*/

#include "stock_fnctn.h"

int gest_error(char *str)
{
    int ln = 0;

    for (; str[ln]; ln++);
    write(2, str, ln);
    return (84);
}