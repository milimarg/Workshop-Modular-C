/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex03.c
*/

#include "../includes/header.h"

/* 3. Basic struct + generic type */
void exercise_3()
{
    int value = 42;
    ex03_t animal = (ex03_t){.data = &value};
    ex03_t animal2 = (ex03_t){.data = strdup("meow!")};

    printf("%d\n", /* display animal 'data' variable */); // expected: 42
    printf("%s\n", /* display animal2 'data' variable */); // expected: meow!
    /* not supposed to leak / no errors */
}
