/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex06.c
*/

#include "../includes/header.h"

static void add_animal_to_list(ex06_t **list, char *key, void *value)
{
    ex06_t *node = malloc(sizeof(ex06_t));

    node->key = key;
    node->value = value;
    node->next = *list;
    *list = node;
}

static void *get_animal_from_list(ex06_t *list, char *key)
{
    for (ex06_t *temp = list; temp != NULL; temp = temp->next)
        if (!strcmp(temp->key, key))
            return temp->value;
    return 0;
}

static void free_animals_list(ex06_t *list)
{
    ex06_t *temp = NULL;

    while (list) {
        temp = list;
        list = list->next;
        free(temp);
    }
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

    printf("%d -- %s -- %.2f\n",
           *((int *)cat_data),
           (char *)dog_data,
           *((double *)fish_data)); // expected: 42 -- woof! -- 3.14

    free_animals_list(map);
}
