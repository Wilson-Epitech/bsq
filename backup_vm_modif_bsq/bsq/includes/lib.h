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
#endif //PROTO.h
