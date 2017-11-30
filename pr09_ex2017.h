//
// Created by djvas on 30/11/2017.
//

#ifndef LP1_PR09_EX2017_H
#define LP1_PR09_EX2017_H

#include <malloc.h>
#include <stdio.h>

#define M50 50
typedef struct student {
    char *pname;
    int number;
    float grade;
    struct student *pnext;
} STUDENT;

typedef struct classstudents {
    char name[M50];
    STUDENT *pfirst;
    int nstudents;
} CLASSSTUDENTS;

typedef struct point {
    int x, y;
} POINT;

typedef struct rectangle {
    POINT up, down;
} RECTANGLE;

typedef struct dynarrayrects {
    RECTANGLE *prects;
    int size;
} DYNARRAYRECTS;

STUDENT *insert_student_head(CLASSSTUDENTS *pcs, char name[], int num, float nota);

STUDENT *remove_student_head(CLASSSTUDENTS *pcs, int num);

STUDENT *peep_student_head(CLASSSTUDENTS cs, int delta);

void print_students_stack(CLASSSTUDENTS c);

STUDENT *remove_student_tail(CLASSSTUDENTS *pcs);

void print_dyn_array_rects(DYNARRAYRECTS dar);

void read_dyn_array_rects(DYNARRAYRECTS dar);

void create_dyn_array_rects(DYNARRAYRECTS *pdar, int n);

int rectangle_compare(RECTANGLE r1, RECTANGLE r2);

RECTANGLE *find__dyn_array_rects(DYNARRAYRECTS dar, POINT ap[], int size);

void print_rect(RECTANGLE r);

RECTANGLE remove_dyn_array_rects(DYNARRAYRECTS dar, POINT ap[], int size);

#endif //LP1_PR09_EX2017_H
