//
// Created by djvas on 16/11/2017.
//

#ifndef LP1_PR07_EX2017_H
#define LP1_PR07_EX2017_H

int main_pr07_ex2017(int argc, const char *argv[]);

char **clone_argv(int argc, const char *argv[]);

void print_dynarray_strings(int size, char **pps);

void free_dynarray_strings(int size, char **pps);

char **create_dynarray_strings(char **pps, int *psize);

char **insert_string_dynarray_strings(char **pps, int *psize, char s[]);

char* create_copy_dyn_string(char str[]);

#endif //LP1_PR07_EX2017_H
