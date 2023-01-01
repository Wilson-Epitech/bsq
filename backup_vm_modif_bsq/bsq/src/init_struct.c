/*
** BSQ PROJECT, 2022
** bsq
** File description:
** init_struct
*/

#include "../includes/lib.h"

void init_array_struct(BSQ_T *ALL, int ac, char **av)
{
    struct stat sb;
    stat(av[1], &sb);
    if (ac != 2) {
        exit(84);
    }
    ALL->array.buff = malloc((sizeof(char)) * (sb.st_size + 1));
    ALL->array.i = 0;
    int fd = open(av[1], O_RDONLY);
    if (fd < 0) {
        exit (84);
    }
    read(fd, ALL->array.buff, sb.st_size);
    ALL->array.buff[sb.st_size] = '\0';
    ALL->array.nb_line = my_getnbr(ALL->array.buff);
    printf("nb : %d\n", ALL->array.nb_line);
}

void init(BSQ_T *ALL, int ac, char **av)
{
    init_array_struct(ALL, ac, av);
}
