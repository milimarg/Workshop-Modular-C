#include "../../includes/header.h"

void init_object(ex07_t *object, obj_type type, int args_nb, ...)
{
    va_list va;
    entity_object *entity = NULL;
    background_object *background = NULL;
    item_object *item = NULL;

    va_start(va, args_nb);
    object->type = type;
    switch (object->type) {
        case ENTITY:
            entity = malloc(sizeof(entity_object));
            /* fulfill object variables using variadic list */
            printf("Entity created - name = %s - value = %d\n",
                   entity->name, entity->value);
            break;
        case BACKGROUND:
            background = malloc(sizeof(background_object));
            /* fulfill object variables using variadic list */
            printf("Background created - filepath = %s - size = %d x %d\n",
                   background->filepath, background->width, background->height);
            break;
        case ITEM:
            item = malloc(sizeof(item_object));
            /* fulfill object variables using variadic list */
            printf("Item created - name = %s - texture_filepath = %s\n",
                   item->name, item->texture_filepath);
            break;
    }
    va_end(va);
}

void delete_object(ex07_t *object)
{
    entity_object *entity = NULL;
    background_object *background = NULL;
    item_object *item = NULL;

    switch (object->type) {
        case ENTITY:
            printf("Deleted entity (%s)\n", entity->name);
            break;
        case BACKGROUND:
            printf("Deleted background (%s)\n", background->filepath);
            break;
        case ITEM:
            printf("Deleted item (%s)\n", item->name);
            break;
    }
    /* no valgrind errors / no leaks */
}
