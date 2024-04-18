/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** ex06.c
*/

#include "../includes/header.h"

static void destroy_string(ex04_t *module)
{
    free(module->string);
}

static void dump_string(const ex04_t *module)
{
    printf("%s\n", module->string);
}

static void edit_string(ex04_t *module, char *string)
{
    free(module->string);
    module->string = strdup(string);
}

static const char *get_string(const ex04_t *module)
{
    return module->string;
}

static void init_string(ex04_t *module, char *string)
{
    module->string = strdup(string);
    module->dump = &dump_string;
    module->edit = &edit_string;
    module->get = &get_string;
}

/* Wrap 'char *' as string in custom module */
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

    /* expected:
     Hey! I'm a message!
     I'm back!
     String in module: Meow!
     */
}
