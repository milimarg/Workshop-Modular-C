/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex05.c
*/

#include "../includes/header.h"

static void add_animal_to_list(ex06_t **list, char *key, void *value)
{
    /* create node */
    /* add key to node */
    /* add value to node */
    /* add node to list */
}

static void *get_animal_from_list(ex06_t *list, char *key)
{
    /* get value paired with given key */
    return 0;
}

static void free_animals_list(ex06_t *list)
{
    /* free list nodes */
}

/* basic linked list + generic type */
void exercise_6()
{
    ex06_t *map = NULL;

    int cat_value = 42;
    char *dog_value = "woof!";
    double fish_value = 3.14;

    add_animal_to_list(&map, "cat", &cat_value);
    add_animal_to_list(&map, "dog", dog_value);
    add_animal_to_list(&map, "fish", &fish_value);

    void *cat_data = get_animal_from_list(map, "cat");
    void *dog_data = get_animal_from_list(map, "dog");
    void *fish_data = get_animal_from_list(map, "fish");

    printf("%d -- %s -- %.2f\n", /* display animals 'data' variable */); // expected: 42 -- woof! -- 3.14

    free_animals_list(map);
    /* not supposed to leak / no errors */
}
