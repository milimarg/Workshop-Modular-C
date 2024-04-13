/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex01.c
*/

#include "../includes/header.h"

/* 1. Basic struct */
void exercise_1()
{
    ex01_t animal = (ex01_t){.data = 42};

    printf("%d\n", /* display animal 'data' variable */); // expected: 42
}
