/*
** BSQ PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "includes/lib.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

int main(int ac, char **av)
{
    struct stat sb;
    stat(av[1], &sb);
    char *buff = malloc((sizeof(char)) * (sb.st_size));
    int fd = open(av[1], O_RDONLY);
    int buffcount = read(fd, buff, sb.st_size);
    my_putstr(buff);
    close(fd);
}
