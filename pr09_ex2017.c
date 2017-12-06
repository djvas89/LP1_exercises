//
// Created by djvas on 30/11/2017.
//


#include "pr09_ex2017.h"


STUDENT *insert_student_head(CLASSSTUDENTS *pcs, char name[], int num, float nota) {
    STUDENT *ps = (STUDENT *) malloc(sizeof(STUDENT));
    ps->pname = create_copy_dyn_string(name);
    ps->number = num;
    ps->grade = nota;
    ps->pnext = pcs->pfirst;
    pcs->nstudents++;
    pcs->pfirst = ps;
    return ps;
}

STUDENT *remove_student_head(CLASSSTUDENTS *pcs, int num) {
    STUDENT *paux = pcs->pfirst;
    pcs->pfirst = paux->pnext;
    paux->pnext = NULL;
    pcs->nstudents--;
    return paux;
}

STUDENT *peep_student_head(CLASSSTUDENTS cs, int delta) {
    STUDENT *paux = cs.pfirst;
    int i = 0;
    while (paux != NULL && i < delta) {
        paux = paux->pnext;
        i++;
    }
    return paux;
}

void print_students_stack(CLASSSTUDENTS c) {
    STUDENT *ps = NULL;
    for (int i = 0; i < c.nstudents; ++i) {
        ps = peep_student_head(c, i);
        if (ps != NULL) {
            printf("%s%d%0.2f\n", ps->pname, ps->number, ps->grade);
        }
    }
}

STUDENT *remove_student_tail(CLASSSTUDENTS *pcs) {
    STUDENT *paux = NULL, *pant = NULL;

    paux = pcs->pfirst;
    pant = paux;
    while (paux != NULL && paux->pnext != NULL) {
        paux = paux->pnext;
    }
    if (pant == NULL)return NULL;
    {
        pant->pnext = NULL;
    }
    return paux;
}

void create_dyn_array_rects(DYNARRAYRECTS *pdar, int n) {
    RECTANGLE *p = (RECTANGLE *) calloc(n, sizeof(RECTANGLE));
    pdar->prects = p;
    (*pdar).size = n;
}

void read_dyn_array_rects(DYNARRAYRECTS dar) {
    RECTANGLE *pr = dar.prects;
    printf("Insert Coordinates of %d Rects\n", dar.size);
    for (int i = 0; i < dar.size; ++i) {
        printf("Rect %d: ", i);
        scanf("%d%d%d%d", &(pr->up.x), &(pr->up.y), &((*pr).down.x), &((*pr).down.y));
        pr++;
    }
}

void print_dyn_array_rects(DYNARRAYRECTS dar) {
    RECTANGLE *pr = dar.prects;
    printf("The Coordinates of %d Rects\n", dar.size);
    for (int i = 0; i < dar.size; ++i) {
        printf("Rect %d: ", i);
        printf("%d%d%d%d", (pr->up.x), (pr->up.y), (*pr).down.x, (*pr).down.y);
        pr++;
    }
}

int rectangle_compare(RECTANGLE r1, RECTANGLE r2) {
    return (r1.up.x - r2.up.x) +
           (r1.up.y - r2.up.y) +
           (r1.down.x - r2.down.x) +
           (r1.down.y - r2.down.y);
}

RECTANGLE *find__dyn_array_rects(DYNARRAYRECTS dar, POINT ap[], int size) {
    RECTANGLE *pr = dar.prects;
    RECTANGLE r1 = {{0, 0},
                    {0, 0}};
    for (int i = 0; i < dar.size; ++i) {
        for (int j = 0; j < size; j += 2) {
            r1.up = ap[j];
            r1.down = ap[j + 1];
            if (rectangle_compare(*pr, r1) == 0)
                return pr;
        }
        pr++;
    }
    return NULL;
}

void print_rect(RECTANGLE r) {
    printf("Rect : [(%d,%d),(%d,%d)]\n", r.up.x, r.up.y, r.down.x, r.down.y);
}

RECTANGLE remove_dyn_array_rects(DYNARRAYRECTS dar, POINT ap[], int size) {
    RECTANGLE *pr = dar.prects;
    RECTANGLE r1 = {{0, 0},
                    {0, 0}},
            raux = {{0, 0},
                    {0, 0}},
            r0 = {{0, 0},
                  {0, 0}};

    for (int i = 0; i < dar.size; ++i) {
        for (int j = 0; j < size; j += 2) {
            r1.up = ap[j];
            r1.down = ap[j + 1];
            if (rectangle_compare(*pr, r1) == 0)
                raux = *pr;
            for (int k = i; k < (dar.size - 1); ++k) {
                *pr = *(pr + 1);
                pr++;
            }
            *pr = r0;
            return raux;
        }
        pr++;
    }
    return r0;
}

void free_dyn_array_rects(DYNARRAYRECTS *pdar) {
    free(pdar->prects);
    pdar->prects = NULL;
    pdar->size = 0;
}

void save_dyn_array_rects_txt(DYNARRAYRECTS dar, char filename[]) {
    FILE *fp = NULL;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        fprintf(stdout, "Erro Abertura Ficheiro%s\n", filename);
        return;
    }
    fprintf(fp, "List Rects\n %d\n", dar.size);
    for (int i = 0; i < dar.size; ++i) {
        fprintf(fp, "ID: %d %d %d %d %d\n", i, (dar.prects + i)->up.x, (dar.prects + i)->up.y,
                (*(dar.prects + i)).down.x, (*(dar.prects + i)).down.y);
    }
}

void read_dyn_array_rects_txt(DYNARRAYRECTS *pdar, char fn[]) {
    FILE *fp = NULL;
    RECTANGLE *paux = NULL;
    char line[M200] = "", auxStr[M200] = "";
    int size = 0, index;
    if ((fp == fopen(fn, "r")) == NULL) {

        return;
    }

    fgets(line, M200, fp);
    fscanf(fp, "%d", &size);
    create_dyn_array_rects(pdar, size);
    paux = pdar->prects;
    for (int i = 0; i < size; ++i) {
        fscanf(fp, "%s %d %d %d %d %d", auxStr, &index, &(paux->up.x), &(paux->up.y), &((*paux).down.x),
               &((*paux).down.y));
        paux++;
    }
}