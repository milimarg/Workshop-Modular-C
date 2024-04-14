#include "../../includes/header.h"

void update_entity(ex07_t *object)
{
    printf("Updating entity (%s)...\n", ((entity_object *)object->data)->name);
}

void update_background(ex07_t *object)
{
    printf("Updating background...\n");
}

void update_item(ex07_t *object)
{
    printf("Updating item... (%s)\n", ((item_object *)object->data)->name);
}

void draw_entity(ex07_t *object)
{
    printf("Drawing entity (%s)...\n", ((entity_object *)object->data)->name);
}

void draw_background(ex07_t *object)
{
    printf("Drawing background...\n");
}

void draw_item(ex07_t *object)
{
    printf("Drawing item (%s)...\n", ((entity_object *)object->data)->name);
}
