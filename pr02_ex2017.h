//
// Created by djvas on 10/10/2017.
//

#ifndef LP1_PR02_EX2017_H
#define LP1_PR02_EX2017_H

#include <stdio.h>
#include <stdlib.h>
int main_pr02_ex2017(int argc, const char *argv[]);

void testMultiAdd();
int multiplicationAdd(int num1, int num2);

void multiTable();

void testPow();
float pot (float base, int exp);

long multiRec(int a, int b);

void invertedPyramid();

void testFactRec();
unsigned long long fact_recur(int n);

int isTriangularNumber(unsigned int num);
void testIsTriangular();
/*
 *

Desenvolver uma função que separa e imprime um número em duas metades, e.g., 284 -> 2 e 4; 4587 -> 45 e 87.

Desenvolver uma função para ler um float no formato hh.mm (%f) e imprimir separadamente as horas (hh) e os minutos (mm), e.g., 2.5 -> 2h e 50min.
NB: Pode haver um problema de arredondamento que não controlamos -> Desenvolver uma função que analisa a representação float até centésima e corrige o problema (e.g. 0.59 pode ser representado por 0.5899; 0.01 pode ser representado por 0.0099).

Desenvolver uma função para ler um float no formato hh.mm (%f) e imprimir separadamente as horas (hh) e os minutos (mm) mas considerando os casos em que mm > 60 (i.e. retirar múltiplos de mm/60 para somar às horas e actualizar minutos para mm%60):: e.g. 2.62 -> 3h e 2min.

Desenvolver uma função para ler caracteres numéricos (%c) e converter o respectivo número no valor decimal final (%d), e.g., '2' '1' '8' -> 218.

Desenvolver uma função que recebe um número inteiro e imprime separadamente (da menor para a maior ordem): número de unidades, dezenas, centenas, …;
e.g., 218 = 8 unidades + 1 dezenas + 2 centenas ou  8 + 10 + 200.

Desenvolver uma função que recebe um número inteiro e imprime separadamente (da maior para a menor ordem): número de …, centenas, dezenas, unidades,
e.g., 218 = 2 centenas + 1 dezenas + 8 unidades ou  200 + 10 + 8.


 * */

#endif //LP1_PR02_EX2017_H
