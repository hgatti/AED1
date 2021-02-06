/*
Eco.c
Entrada: A entrada é composta de um único número inteiro N.
Saida: A saída consiste de uma única linha contendo o número inteiro N ecoado. Após a impressão salte uma linha.
Restrições:•- 2^63 ≤ N ≤ 2^63-1
*/
#include <stdio.h>

int main() {

    long int n;
    scanf("%ld", &n);
    printf("%ld\n", n);
    return 0;
}