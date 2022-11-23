/*
** BSQ PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "includes/lib.h"

int main(int ac, char **av)
{
    struct stat sb;
    const char *filepath = av[1];
    stat(filepath, &sb);
    char *buff = malloc((sizeof(char)) * (sb.st_size));
    char **string;
    int fd;
    int buffcount = 0;

    fd = open(filepath, O_RDONLY);
    if (fd < 0) {
        exit(84);
    }
    for (int count_line = 0; count_line != 3; count_line++) {
        buffcount = read(fd, buff, sb.st_size);
    }
    string = my_str_to_word_array(buff);
    my_putstr(buff);
    free(buff);
    my_putchar('\n');
    close(fd);
}
