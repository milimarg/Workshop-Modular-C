/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex04.c
*/

#include "../includes/header.h"

void add_animal_to_list(ex05_t *list, char *key, int value)
{
    /* create node */
    /* add key to node */
    /* add value to node */
    /* add node to list */
}

int get_animal_from_list(ex05_t *list, char *key)
{
    /* get value paired with given key */
    return -1;
}

void free_animals_list(ex05_t *list)
{
    /* free list nodes */
}

/* basic linked list */
void exercise_5()
{
    ex05_t *map = NULL;

    add_animal_to_list(map, "cat", 42);
    add_animal_to_list(map, "dog", 21);
    add_animal_to_list(map, "fish", 84);

    int cat_data = get_animal_from_list(map, "cat");
    int dog_data = get_animal_from_list(map, "dog");
    int fish_data = get_animal_from_list(map, "fish");

    printf("%d -- %d -- %d\n", /* display animals 'data' variable */); // expected: 42 -- 21 -- 84

    free_animals_list(map);
}
