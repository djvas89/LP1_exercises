//
// Created by djvas on 10/10/2017.
//

#include "pr02_ex2017.h"

int main_pr02_ex2017(int argc, const char *argv[]) {
    //testMultiAdd();
    //multiTable();
    //testPow();
    //multiRec(2,3);
    //invertedPyramid();
    //testFactRec();
    //testIsTriangular();
    return 0;
}

void testMultiAdd() {
    int num1, num2 = 0;
    printf("Multiplication by sum!\n");
    printf("\nWrite number of times to be multiplied: \n");
    scanf("%d", &num1);
    printf("\nWrite number to be multiplied: \n");
    scanf("%d", &num2);
    printf("\nResult: %d \n", multiplicationAdd(num1, num2));
}

void testPow() {
    int exp;
    float base, res;
    printf("Introduza o numero da base : \n\n");
    scanf("%f", &base);
    printf("Introduza o expoente do numero: \n\n");
    scanf("%d", &exp);

    printf("%.1f", pot(base, exp));
}

//multiplicação recursiva
long multiRec(int a, int b) {
    if (a < b) {
        return multiRec(b, a);
    } else if (b != 0) {
        return (a + multiRec(a, b - 1));
    } else {
        return 0;
    }
}

//função multiplicacao() que permita multiplicar dois ints de forma iterativa (desdobrar em somas).
int multiplicationAdd(int num1, int num2) {
    int i, j, res = 0;
    while (num2 > 0) {
        res += num1;
        num2--;
    }
    return res;
}

//função que permita ler um número e imprimir a respectiva tabuada de forma iterativa mas usando a função multiplicacao() em vez do operador '*'.
void multiTable() {
    int i = 1;
    int num = 1;
    int res;

    // printf("escolha um numero:\n");
    // scanf("%d", &num);
    while (num <= 10) {
        printf("\nTabuada do %d \n\n", num);
        while (i <= 10) {
            res = multiplicationAdd(i, num);
            printf("%d * %d = %d \n", num, i, res);
            i = i + 1;
        }
        num = num + 1;
        i = 1;
    }
}

//função para imprimir a potência de um número de forma iterativa mas sem usar pow (desdobrar em multiplicações e usando a função multiplicação anterior).
float pot(float base, int exp) {
    float res = 1.0;
    int i = 1;
    while (i <= exp) {
        res *= base;
        i++;
    }
    return res;
}

/*função que recebe um número (largura da base) e imprime uma pirâmide invertida, e.g., para n = 9 imprime:
1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
  3 4 5 6 7
    4 5 6
      5
 */
void invertedPyramid() {
    int i, j;
    int num = 9;

    for (i = num; i > 0; i--) {
        for (j = num - i; j > 0; j--)
            printf("  "); //imprime os espaços na piramide
        for (j = 2 * i - 1; j > 0; j--)
            printf(" %d", j);
        printf("\n");
    }
}

//Desenvolver uma função que determina se um número *unsigned int* é triangular, i.e.,
// se for igual ao produto de três números *unsigned int* consecutivos, e.g., 6 = 1 * 2 * 3;  504 = 7 * 8 *9; 1320 = 10 * 11 * 12.
int isTriangularNumber(unsigned int num) {
    if (num < 0)
        return 0;
    int sum = 0;
    for (int n = 1; sum <= num; n++) {
        sum = sum + n;
        if (sum == num)
            return 1;
    }
    return 0;
}

void testIsTriangular() {
    int n;
    printf("Insira um numero\n");
    scanf("%d", &n);
    if (isTriangularNumber(n))
        printf("The number is a triangular number");
    else
        printf("The number is NOT a triangular number");
}

void testFactRec() {
    int n;
    printf("Escreva o seu numero: ");
    scanf("%d", &n);
    unsigned long long res;
    res = fact_recur(n);
    printf("O Factorial eh %d", res);
}

unsigned long long fact_recur(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else
        return n * fact_recur(n - 1);
}