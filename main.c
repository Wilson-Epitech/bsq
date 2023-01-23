/*
** BSQ PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "includes/lib.h"

int assign_values_array(BSQ_T *ALL)
{
    ALL->array.width = width_of_array(ALL);
    ALL->array.width_line = strlen_char_of_line(ALL);
    ALL->array.i = before_first_char(ALL);
    ALL->array.array = malloc(sizeof(int*) * ALL->array.nb_line + 1);
}

void call_func(BSQ_T *ALL)
{
    assign_values_array(ALL);
    replace_char(ALL);
    find_bsq(ALL);
    find_max_nb(ALL);
    find_min_nb(ALL);
    replace_bsq(ALL);
    print_array(ALL);
}

int main(int ac, char **av, char *buff)
{
    BSQ_T ALL;
    init(&ALL, ac, av);
    call_func(&ALL);
    return 0;
}
