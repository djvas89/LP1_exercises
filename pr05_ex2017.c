//
// Created by djvas on 25/10/2017.
//

#include <stdio.h>
#include <math.h>
#include "pr05_ex2017.h"

int main_pr05_ex2017(int argc, const char *argv[]) {


}

void double_var(double a) {
    a = 2 * a;
}

void double_var_ptr(double *pa) {
    *pa = (*pa) * 2;
}

void double_array_ptr(double *pd, int size) {
    for (int i = 0; i < size; ++i) {
        *(pd + i) *= 2;
    }
}

void print_double_array_ptr(double *pd, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%f", *(pd++));
    }
}

void print_args(char *v[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s\n", v[i]);
    }
}

void print_non_repeated_str(char *v[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {

        }
    }
}

void swap(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
}

void swapPtr(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nFunção:");
    printf("\nvar1 = %d", *x);
    printf("\nvar2 = %d", *y);
}

void printArray(int *arr, int size) {
    int i = 0;
    for (i = 0; i < size; ++i) {
        printf("[%d] : %d\n", i, *(arr + i));
    }
    printf("\n");
}

void swapArray(int *arr, int size) {
    int i, temp, j;
    for (i = 0, j = size - 1; i < size / 2; i++, j--) { // se não dividir por dois inverte para o array original
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
}


void roots(double a, double b, double c, double *r1, double *r2) {
    double delta = b * b - 4 * a * c;
    if (delta >= 0) {
        delta = sqrt(delta);
        *r1 = (-b + delta) / (2 * a);
        *r2 = (-b - delta) / (2 * a);
    } else {
        printf("Raiz Imaginária");
    }
}

double *swap_double_array_ptr(double *pd, int pos1, int pos2) {
    double aux = *(pd + pos1);
    *(pd + pos1) = *(pd + pos2);
    *(pd + pos2) = aux;
    return pd;
}

void print_double_array_ptr2(double *pd, int pos1, int pos2) {
    printf("Pos1 %d = %0.2f, Pos2 %d = %0.2f\n", pos1, *(pd + pos1), pos2, *(pd + pos2));
}

int strlen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}

int *search_minmax(int *pi, int size, int *pminmax) {
    int i = 0;
    *pminmax = *pi;
    *(pminmax + 1) = *pi;
    for (int i = 1; i < size; ++i) {
        if (*(pminmax + 0) < *(pi + i)) {
            *(pminmax + 0) = *(pi + i);
        } else if (*(pminmax + 1) > *(pi + i)) {
            *(pminmax + 1) = *(pi + i);
        }
    }
    return pminmax;
}


