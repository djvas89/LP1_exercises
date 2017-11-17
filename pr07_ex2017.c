//
// Created by djvas on 16/11/2017.
//

#include <malloc.h>
#include <mem.h>
#include <stdio.h>
#include "pr07_ex2017.h"

#define M10 10
#define M200 200

int main_pr07_ex2017(int argc, const char *argv[]) {
    /**char **ppnomes = NULL;
    ppnomes = clone_argv(argc, argv);
    print_dynarray_strings(argc, ppnomes);
    free_dynarray_strings(argc, ppnomes);
*/
    char str[M200] = "";
    char **ppnomes = NULL;
    int size = 0;
    int index = 0;
    ppnomes = create_dynarray_strings(ppnomes, &size);
    printf("Inserir Nomes (Terminar c/ \".\")\n");
    do {
        fgets(str, M200, stdin);
        if (strcmp(str, ".\n") == 0) break;
        if (index == (size - 1)) {
            create_dynarray_strings(ppnomes, &size);
        }
    } while (1);
    return 0;
}

char **clone_argv(int argc, const char *argv[]) {
    char **ppnew = (char **) malloc(sizeof(char *) * argc); // ppnew aponta para o primeiro endereço do argv
    for (int i = 0; i < argc; ++i) {
        *(ppnew + i) = (char *) malloc(strlen(argv[i]) + 1);
        strcpy(*(ppnew + i), argv[i]);
    }
    return ppnew;
}

void print_dynarray_strings(int size, char **pps) {

    for (int i = 0; i < size; ++i) {
        printf("String %d = %s \n", i, *(pps + i));
    }
}

void free_dynarray_strings(int size, char **pps) {
    for (int i = 0; i < size; ++i) {
        free(*(pps + i));
    }
    free(pps);
}

char **create_dynarray_strings(char **pps, int *psize) {
    char **ppnew = NULL;
    if (pps == NULL) {
        *psize = M10;
        ppnew = (char **) calloc(*psize, sizeof(char **));
        return ppnew;
    }
    *psize += M10;
    ppnew = (char **) realloc(pps, *psize);
    for (int i = *psize - 1; i >= (*psize - M10); --i) {
        *(ppnew + i) = NULL;
    }
    return ppnew;
}

char **insert_string_dynarray_strings(char **pps, int *psize, char s[]) {
    for (int i = 0; i < *psize; ++i) {
        if (*(pps + i) == NULL) {
            *(pps + i) = create_copy_dyn_string(s);
        }
    }
}

char *create_copy_dyn_string(char str[]) {
    char *t;
    t = (char *) malloc(sizeof(char) * strlen(str));
    strcpy(t, str);
    return t;
}

//char ** order_dynarray_strings(char *pps, int size)

//strcmp(*(pps+i),*(pps+j))<0 ou >0
