/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** functions prototypes
*/

#ifndef MY_H
    #define MY_H

char *my_revstr ( char *str );

int my_putstr(char const *str);

int my_put_nbr(int nb);

void my_putchar(char c);

int my_strlen(char const *str);

int oct(unsigned int n);

char *hexa_mayus(unsigned int n);

char *hexa_minus(unsigned int n);

int my_put_unsigned_nbr(unsigned int nb);

int my_nbrlen(int num);

int my_printf(const char *format , ...);

int my_putnum_base_long(long num, char *base);

int my_put_float(double num);

int notcien_min(double num);

int notcien_mayus(double num);

#endif
