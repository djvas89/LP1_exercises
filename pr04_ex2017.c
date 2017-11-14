//
// Created by djvas on 19/10/2017.
//

#include <mem.h>
#include "pr04_ex2017.h"

int main_pr04_ex2017(int argc, const char *argv[]) {

    return 0;
}


long prod_intern(int a[], int b[], int size) {
    long pi = 0L;
    for (int i = 0; i < size - 1; ++i) {
        pi += (a[i] * b[i]);
    }
    return pi;
}

int del_repeated_ints(int v[], int size) {
    int t = 0, j = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (v[i] == v[j])
                break;
        }
        if (j == size)
            v[t++] = v[i];
        v[t++] = v[size];
    }
    return t;
}

int del_sub_ints(int v[], int sizev, int sub[], int sizesub) {
    int t = 0, j = 0, i = 0;
    for (i = 0; i < sizev; ++i) {
        for (j = 0; j < sizesub; ++j) {
            if (v[i] == sub[j])
                break;
        }
    }
    if (j == sizesub)
        v[t++] = v[i];
    return t;
}

char *delete_repeated_chars(char s[]) {
    int i, j, t;
    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i - 1; j >= 0; --j) {
            if (s[i] == s[j])
                break;
        }
        if (j < 0)
            s[t++] = s[i];
    }
    s[t++] = '\0';
    return s;
}

char *shift_n(char s[], int n) {
    int i, j;
    int size = strlen(s);
    char saux[size + 1];
    for (i = 0, j = n; i < size - n; ++i, ++j) {
        saux[j] = s[i];
    }
    for (i = size - n, j = 0; i < size; ++i, ++j) {
        saux[j] = s[i];
    }
    saux[size] = '/0';
    strcpy(s, saux);
    return s;
}

int check_bracket_matching(char exp[]) {

}

char *replace_sub2rep(char s[], char sub[], char rep[]) {
    int i, j, k, m;
    int size = strlen(s);
    int lensub = strlen(sub);
    int lenrep = strlen(rep);

    for (i = 0; i < size - 3; ++i) {
        if (s[i] == sub[0])
            for (j = 1; j < size - 3; ++j) {
                if (sub[j] != s[i + j])
                    break;
            }
        if (j == 3)
            if (lensub == lenrep)
                for (k = i, m = 0; m < lenrep; ++k, m++) {
                    s[k] = rep[m];
                }
            else if (lensub > lenrep)
                for (k = i, m = 0; m < lenrep; ++k, m++) {
                    s[k] = rep[m];
                }
            else {
                int dif = lensub - lenrep;
                for (k = i + lensub; k <= lensub; k++) {
                    s[k - dif] = s[k];
                }
                s[k] = '\0';
            }
        else {
            int lens = strlen(s);
            for (k = lens; k > i + lensub; k++) {
                s[k + 1] = s[k];
            }
            int y;
            for (k = i, y = 0; k < lenrep; ++k, ++y) {
                s[k] = rep[y];
            }
        }
    }
}
