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
            entity->name = va_arg(va, char *);
            entity->value = va_arg(va, int);
            object->data = entity;
            object->update_object = &update_entity;
            object->draw_object = &draw_entity;
            printf("Entity created - name = %s - value = %d\n",
                   entity->name, entity->value);
            break;
        case BACKGROUND:
            background = malloc(sizeof(background_object));
            background->filepath = va_arg(va, char *);
            background->width = va_arg(va, int);
            background->height = va_arg(va, int);
            object->data = background;
            object->update_object = &update_background;
            object->draw_object = &draw_background;
            printf("Background created - filepath = %s - size = %d x %d\n",
                   background->filepath, background->width, background->height);
            break;
        case ITEM:
            item = malloc(sizeof(item_object));
            item->name = va_arg(va, char *);
            item->texture_filepath = va_arg(va, char *);
            object->data = item;
            object->update_object = &update_item;
            object->draw_object = &draw_item;
            printf("Item created - name = %s - texture_filepath = %s\n",
                   item->name, item->texture_filepath);
            break;
    }
    va_end(va);
}

void delete_object(ex07_t *object)
{
    void *ptr = object->data;

    switch (object->type) {
        case ENTITY:
            printf("Deleted entity (%s)\n", ((entity_object *)ptr)->name);
            break;
        case BACKGROUND:
            printf("Deleted background (%s)\n", ((background_object *)ptr)->filepath);
            break;
        case ITEM:
            printf("Deleted item (%s)\n", ((item_object *)ptr)->name);
            break;
    }
    free(ptr);
    free(object);
}
