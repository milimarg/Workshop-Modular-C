/*
** EPITECH PROJECT, 2024
** Workshop-Modular-C
** File description:
** header.h
*/

#ifndef WORKSHOP_MODULAR_C_HEADER_H
    #define WORKSHOP_MODULAR_C_HEADER_H
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdarg.h>

/* STRUCTS AND GENERIC TYPE */

typedef struct {
    int data;
} ex01_t;

typedef struct {
    char *data;
} ex02_t;

typedef struct {
    void *data;
} ex03_t;

/* STRING MODULE */

typedef struct ex04_s {
    char *string;
    void (*dump)(const struct ex04_s *module);
    const char *(*get)(const struct ex04_s *module);
    void (*edit)(struct ex04_s *module, char *string);
} ex04_t;

/* LINKED LISTS */

typedef struct ex05_s {
    char *key;
    int value;
    struct ex05_s *next;
} ex05_t;

typedef struct ex06_s {
    char *key;
    void *value;
    struct ex06_s *next;
} ex06_t;

typedef enum {
    ENTITY,
    BACKGROUND,
    ITEM
} obj_type;

typedef struct ex07_s {
    void *data;
    obj_type type;
    void (*update_object)(struct ex07_s *object);
    void (*draw_object)(struct ex07_s *object);
} ex07_t;

typedef struct {
    char *name;
    int value;
} entity_object;

typedef struct {
    char *filepath;
    int width;
    int height;
} background_object;

typedef struct {
    char *name;
    char *texture_filepath;
} item_object;

/* Exercises prototypes */

void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exercise_6();
void exercise_7();

/* Exercise 7 prototypes */

void init_object(ex07_t *object, obj_type type, int args_nb, ...);
void delete_object(ex07_t *object);

void update_entity(ex07_t *object);
void update_background(ex07_t *object);
void update_item(ex07_t *object);
void draw_entity(ex07_t *object);
void draw_background(ex07_t *object);
void draw_item(ex07_t *object);

#endif //WORKSHOP_MODULAR_C_HEADER_H
