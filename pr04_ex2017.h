//
// Created by djvas on 19/10/2017.
//

#ifndef LP1_PR04_EX2017_H
#define LP1_PR04_EX2017_H

#include <stdio.h>
#include <stdlib.h>

int main_pr04_ex2017(int argc, const char *argv[]);

long prod_intern(int a[], int b[], int size);

int del_repeated_ints(int v[], int size);

int del_sub_ints(int v[], int sizev, int sub[], int sizesub);

char* delete_repeated_chars(char s[]);

char* shift_n(char s[], int n);

int check_bracket_matching(char exp[]);

char* replace_sub2rep(char s[], char sub[], char rep[]);

#endif //LP1_PR04_EX2017_H
