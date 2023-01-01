/*
** BSQ PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "includes/lib.h"

int print_array(BSQ_T *ALL)
{
    for (int b = 0; b != ALL->array.nb_line; b++) {
        for (int s = 0; s != ALL->array.width_line; s++) {
            my_put_nbr(ALL->array.array[b][s]);
        }
        my_putchar('\n');
    }
    return 0;
}

int replace_char(BSQ_T *ALL)
{
    if (ALL->array.buff[ALL->array.i] == '.') {
        ALL->array.array[ALL->array.r][ALL->array.s] = 1;
    }
    if (ALL->array.buff[ALL->array.i] == 'o') {
        ALL->array.array[ALL->array.r][ALL->array.s] = 0;
    }
}

int main(int ac, char **av, char *buff)
{
    BSQ_T ALL;
    init(&ALL, ac, av);
    ALL.array.width = width_of_array(&ALL);
    ALL.array.width_line = strlen_char_of_line(&ALL);
    ALL.array.i = before_first_char(&ALL);
    ALL.array.array = malloc(sizeof(int*) * ALL.array.nb_line + 1);

    for (ALL.array.r = 0; ALL.array.r < ALL.array.nb_line; ALL.array.r++) {
        ALL.array.array[ALL.array.r] =
            malloc(sizeof(int) * ALL.array.width_line);
        for (ALL.array.s = 0; ALL.array.s < ALL.array.width_line + 1;
                ALL.array.s++) {
            replace_char(&ALL);
            ALL.array.i++;
        }
    }
    print_array(&ALL);
    return 0;
}
