/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex07.c
*/

#include "../../includes/header.h"

void exercise_7()
{
    ex07_t *obj = malloc(sizeof(ex07_t));
    ex07_t *obj2 = malloc(sizeof(ex07_t));
    ex07_t *obj3 = malloc(sizeof(ex07_t));

    init_object(obj, ENTITY, 2, "Mr. Cat", 42);
    init_object(obj2, BACKGROUND, 3, "./assets/background.jpg", 1920, 1080);
    init_object(obj3, ITEM, 2, "Sword", "./assets/sword.png");

    obj->update_object(obj);
    obj->draw_object(obj);
    obj2->update_object(obj2);
    obj2->draw_object(obj2);
    obj3->update_object(obj3);
    obj3->draw_object(obj3);

    delete_object(obj);
    delete_object(obj2);
    delete_object(obj3);
}
