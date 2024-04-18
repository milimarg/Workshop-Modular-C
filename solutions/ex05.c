/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex04.c
*/

#include "../includes/header.h"

static void add_animal_to_list(ex05_t **list, char *key, int value)
{
    ex05_t *node = malloc(sizeof(ex05_t));

    node->key = key;
    node->value = value;
    node->next = *list;
    *list = node;
}

static int get_animal_from_list(ex05_t *list, char *key)
{
    for (ex05_t *temp = list; temp != NULL; temp = temp->next)
        if (!strcmp(temp->key, key))
            return temp->value;
    return 0;
}

static void free_animals_list(ex05_t *list)
{
    ex05_t *temp = NULL;

    while (list) {
        temp = list;
        list = list->next;
        free(temp);
    }
}

/* basic linked list */
void exercise_5()
{
    ex05_t *map = NULL;

    add_animal_to_list(&map, "cat", 42);
    add_animal_to_list(&map, "dog", 21);
    add_animal_to_list(&map, "fish", 84);

    int cat_data = get_animal_from_list(map, "cat");
    int dog_data = get_animal_from_list(map, "dog");
    int fish_data = get_animal_from_list(map, "fish");

    printf("%d -- %d -- %d\n", cat_data, dog_data, fish_data); // expected: 42 -- 21 -- 84

    free_animals_list(map);
}
