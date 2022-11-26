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
int my_putstr(char const *str);
void my_putchar(char c);
int print_first_line(const char *filepath);
char **my_str_to_word_array(char const *str);
int my_strlen(const char *str);
#endif //PROTO.h
