//
// Created by djvas on 11/10/2017.
//

#include "pr03_ex2017.h"

int main_pr03_ex2017(int argc, const char *argv[]) {
    int a[] = {1, 7, 2, 5};
    int b[] = {1, 7, 2, 5};

    int res = 0;

    int size = sizeof(a) / sizeof(a[0]); //indica-me o tamanho do array
    //para passar como argumento à funçao printf("%d", size);

    res = sumArray(a, size);
    printf("%d", res);

}

double pow_recursive(int base, unsigned int exp) {
    if (exp == 0)
        return 1;
    else if (exp == 1) {
        return base;
    } else {
        return base * pow_recursive(base, exp - 1);
    }
}

void print_hangman_i(unsigned int level) {
    for (int i = 1; i <= level; i++) {
        switch (i) {
            case 1:
                printf(" ()\n");
                break;
            case 2:
                printf("/");
                break;
            case 3:
                printf("|");
                break;
            case 4:
                printf("\\\n");
                break;
            case 5:
                printf(" /");
                break;
            case 6:
                printf("\\\n");
                break;
            default:
                break;
        }
    }
}

void print_hangman_r(unsigned int level) {
    switch (level) {
        case 1:
            printf(" ()\n");
            break;
        case 2:
            print_hangman_r(1);
            printf("/");
            break;
        case 3:
            print_hangman_r(2);
            printf("|");
            break;
        case 4:
            print_hangman_r(3);
            printf("\\\n");
            break;
        case 5:
            print_hangman_r(4);
            printf(" /");
            break;
        case 6:
            print_hangman_r(5);
            printf("\\\n");
            break;
        default:
            break;
    }
}

int sumArray(int v[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        count = v[i] + count;
    }
    return count;
}

int ints_compare(int a[], int b[], int size) {
    for (int i = 0; i < size; ++i) {
        if (a[i] > b[i]) {
            return 1;
        } else if (a[i] < b[i]) {
            return -1;
        } else continue; //se forem iguais continua
    }
}

int index_number(int v[], int size, int n) {
    for (int i = 0; i < size; ++i) {
        if (v[i] == n)
            return i;
    }
    return -1;
}

int count_freq_number(int v[], int size, int n) {
    for (int i = 0; i <= size; ++i) {

    }
}

char *replace_char_by_char(char s[], char c, char x) {

}

int index_firts_vogal(char s[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isVowel(s[i]))
            return i;
    }
}

char *remove_blanks(char s[]) {

}

int isVowel(char v) {
    if (v >= 'A' && v <= 'Z')
        v = v + 'a' - 'A';   /* Converting to lower case or use a = a + 32 */

    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
        return 1;

    return 0;
}

int index_sub_left(char s[], char sub[]) {
    int j;
    for (int i = 0; s[i] != '/0'; ++i) {
        if (s[i] == sub[0])
            for (int j = 1; sub[j] != '\0'; ++j) {
                if (sub[j] != s[i + j])
                    break;
            }
        if (sub[j] == '\0')
            return i;
    }
}

