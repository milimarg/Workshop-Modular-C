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

    printf("%s\n", animal.data); // expected: meow!
    free(animal.data);
}
