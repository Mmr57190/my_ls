/*
** EPITECH PROJECT, 2020
** stock_fnctn
** File description:
** stock_fnctn
*/

#ifndef STOCK_H_
    #define STOCK_H_
    #define BLUE "\x1B[94m"
    #define WHITE "\e[0;0m"
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <dirent.h>
    #include <string.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
    #include "my.h"

int find_name(char *str);
int find_size(char *str);
char find_type(char *str);
void display(char *str);
int main(int ac, char **av);
int sous_fnctn(char *str);
int file_type1(char *str);
int file_type2(char *str);
void my_printf(char *str, ...);
char *value_to_count(char **av, char *count, int i);
int right_to_l(struct stat data);
int my_after_right(struct stat data);
void my_user(struct stat data);
int find_date(char *time);
char **affich_nrml(char *mask, char **av);
int size_score_r(char **res);
void gest_mask(int ac, char **av);
void my_total_l(char *file);
char **my_score_r(char **av, char *mask);
int my_score_l(int ac, char **av, char *mask, char **file);
char **my_rev_r(char **res);
void gest_color(char *str);
void my_score_d(int ac, char **av);
int add_fnctn(char *file, struct stat data, DIR *dir);
int gest_filter(char **av, struct dirent *dirent);
int filter_simple(char **av, char *file_nrml);
void display_many(int ac, char **av);
char *enter_directory(char *one, char *end);
void gest_many_directory(char **av, int i, DIR *folder);
void display_without_flag(int ac, char *file, int choice);
void gest_ac_two(char **av, int i, DIR *dir);
void gest_rmaj(char **av, DIR *folder);
void call_function(char **av, int i);

#endif
