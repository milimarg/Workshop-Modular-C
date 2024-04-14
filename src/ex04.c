/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex06.c
*/

#include "../includes/header.h"

void destroy_string(ex04_t *module)
{
    /* destroy the string */
}

void dump_string(ex04_t *module)
{
    /* display module content */
}

void edit_string(ex04_t *module, char *string)
{
    /* edit module content */
}

const char *get_string(const ex04_t *module)
{
    /* get module content */
}

void init_string(ex04_t *module, char *string)
{
    /* create a string in the module */
}

/* wrap 'char *' as string in custom module */
void exercise_4()
{
    ex04_t string_module;

    init_string(&string_module, "Hey! I'm a message!");
    string_module.dump(&string_module);
    string_module.edit(&string_module, "I'm back!");
    string_module.dump(&string_module);
    string_module.edit(&string_module, "Meow!");
    printf("String in module: %s\n", string_module.get(&string_module));
    destroy_string(&string_module);
    /* not supposed to leak / no errors */

    /* expected:
     Hey! I'm a message!
     I'm back!
     String in module: Meow!
     */
}
