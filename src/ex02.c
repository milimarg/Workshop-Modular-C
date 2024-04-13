/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex02.c
*/

#include "../includes/header.h"

/* 2. Basic struct + pointer */
void exercise_2()
{
    ex02_t animal = (ex02_t){.data = strdup("meow!")};

    printf("%s\n", /* display animal 'data' variable */); // expected: meow!
    /* not supposed to leak / no errors */
}
