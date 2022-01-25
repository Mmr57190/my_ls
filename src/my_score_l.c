/*
** EPITECH PROJECT, 2021
** my_sore_l
** File description:
** my_score_l
*/

#include "stock_fnctn.h"

int right_to_l(struct stat data)
{
    if (S_ISDIR(data.st_mode))
        my_printf("%c", 'd');
    else
        my_printf("%c", '-');
    (data.st_mode & S_IRUSR)? my_printf("%c", 'r'): my_printf("%c", '-');
    (data.st_mode & S_IWUSR)? my_printf("%c", 'w'): my_printf("%c", '-');
    (data.st_mode & S_IXUSR)? my_printf("%c", 'x'): my_printf("%c", '-');
    (data.st_mode & S_IRGRP)? my_printf("%c", 'r'): my_printf("%c", '-');
    (data.st_mode & S_IWGRP)? my_printf("%c", 'w'): my_printf("%c", '-');
    (data.st_mode & S_IXGRP)? my_printf("%c", 'x'): my_printf("%c", '-');
    (data.st_mode & S_IROTH)? my_printf("%c", 'r'): my_printf("%c", '-');
    (data.st_mode & S_IWOTH)? my_printf("%c", 'w'): my_printf("%c", '-');
    (data.st_mode & S_IXOTH)? my_printf("%c", 'x'): my_printf("%c", '-');
    my_putchar(' ');
}

void my_user(struct stat data)
{
    struct passwd *user_id;
    user_id = getpwuid(data.st_uid);
    struct group *group_id;
    group_id = getgrgid(data.st_gid);

    my_printf(" %s", user_id->pw_name);
    my_printf(" %s", group_id->gr_name);
}

int find_date(char *time)
{
    for (int i = 4; i < 16; i++)
        my_putchar(time[i]);
    return (0);
}

int add_fnctn(char *file, struct stat data, DIR *dir)
{
    stat(file, &data);
    right_to_l(data);
    my_after_right(data);
    my_user(data);
    find_size(file);
    find_date(ctime(&data.st_ctime));
    find_name(file);
}

int my_score_l(int ac, char **av, char *mask, char **file)
{
    DIR *dir = opendir(".");
    struct stat ex;
    DIR *folder;
    int i = 0;

    if (ac == 2)
        gest_ac_two(av, i, dir);
    else {
        for (int i = 2; av[i] != NULL; i++) {
            stat(av[i], &ex);
            if (av[i] != NULL && ac != 3 && S_ISDIR(ex.st_mode))
                my_printf("%s:\n", av[i]);
            if (S_ISDIR(ex.st_mode)) {
                my_total_l(av[i]);
                folder = opendir(av[i]);
                gest_many_directory(av, i, folder);
                if (av[i + 1] != NULL)
                    my_putchar('\n');
            } else
                call_function(av, i);
        }
    }
    return (0);
}
