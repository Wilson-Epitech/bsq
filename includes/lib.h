/*
** BSQ PROJECT, 2022
** protoype
** File description:
** proto
*/

#ifndef PROTO_H
    #define PROTO_H
    #include <sys/stat.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include "struct.h"
int my_putstr(char const *str);
void my_putchar(char c);
int my_getnbr(char const *str);
void init(BSQ_T *ALL, int ac, char **av);
int strlen_char_of_line(BSQ_T *ALL);
int width_of_array(BSQ_T *ALL);
int before_first_char(BSQ_T *ALL);
int my_put_nbr(int nb);
char **my_str_to_word_array(char const *str);
int my_strlen(char const *str);
int print_array(BSQ_T *ALL);
int find_bsq(BSQ_T *ALL);
int find_max_nb(BSQ_T *ALL);
int find_min_nb(BSQ_T *ALL);
int replace_bsq(BSQ_T *ALL);
int replace_char(BSQ_T *ALL);
int error_invalid_char_buffer(BSQ_T *ALL);
int invalid_nb_args(BSQ_T *ALL, int ac);
int invalid_file(BSQ_T *ALL, int fd);
int empty_file(BSQ_T *ALL);
void print_buff(BSQ_T *ALL);
#endif //PROTO.h
