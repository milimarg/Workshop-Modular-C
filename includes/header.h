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
    void (*create_string)(struct ex04_s *module, char *string);
    void (*delete)(struct ex04_s *module);
    void (*dump)(const struct ex04_s *module);
    const char *(*get)(const struct ex04_s *module);
    void (*edit)(struct ex04_s *module, char *string);
} ex04_t;

/* LINKED LISTS */

typedef struct ex05_s {
    char *key;
    int value;
    struct ex04_s *next;
} ex05_t;

typedef struct ex06_s {
    char *key;
    void *value;
    struct ex05_s *next;
} ex06_t;

enum obj_type {
    ANIMAL,
    FRUIT,
    BACKGROUND
};

typedef struct ex07_s {
    void *data;
    obj_type type;
    struct ex07_s *next;
} ex07_t;

typedef struct ex08_s {
    void *data;
    obj_type type;
    struct ex08_s *next;
    // add
} ex08_t;

/* PROTOTYPES */

void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exercise_6();
void exercise_7();

#endif //WORKSHOP_MODULAR_C_HEADER_H
