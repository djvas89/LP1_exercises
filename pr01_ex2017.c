//
// Created by djvas on 28/09/2017.
//

#include "pr01_ex2017.h"

int main_pr01_ex2017(int argc, const char *argv[]) {
    //readCharPrintAscii();
    //readIntsPrintDiv();
    //readDateGender();
    //printAsciiTableLetters();
    //printDigitOrNot();
    //parseCountInStream();
    //countInsertedChar();
    return 0;
}


void readCharPrintAscii() {
    char c = '\0';
    do {
        printf("Insira uma palavra\n");
        scanf(" %c", &c);
        printf("%c %d\n", c, c);
    } while (c != '.');
}

void readIntsPrintDiv() {
    int a = 2, b = 5;
    printf("%d / %d = %0.2f\n", a, b, (float) a / b);
}

void readDateGender() {
    int date = 0;
    int month = 0;
    int year = 0;
    char gender = '\0';
    printf("Instroduza a data, mes, ano e genero");
    scanf("%d %d %d %c", &date, &month, &year, &gender);
}

void printAsciiTableLetters() {
    for (int i = 'A'; i <= 'z'; ++i) {
        printf("%c -> %d\n", i, i);
        if (i > 'Z' && i < 'a')
            continue;
    }
}

void printDigitOrNot() {
    char c = '\0';
    do {
        printf("Insira uma palavra\n");
        scanf(" %c", &c);
        if (c >= '0' && c <= '9')
            printf("Digit\n");
        else
            printf("Not Digit\n");
    } while (c != '.');
}

void parseCountInStream() {

}

void countInsertedChar() {
    int cont = 0;
    char c = '\0', c2='\0';
    printf("Insira uma caracter\n");
    scanf("%c", &c);
    getchar();

    while ((c2 = getchar()) != '\n') {
        //printf("%c", c);
        if (c2==c) {
            cont++;
        }
    }
    printf("char '%c' aparece %d vezes\n", c, cont);
}