#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void criarConjunto(TConjunto * const conjA) {
    int i;
    
    printf("Digite a quantidade de elementos para o conjunto: ");
    scanf("%d", &(conjA->quantidade));

    
    conjA->elementos = (int *) malloc(conjA->quantidade * sizeof(int));

    if (conjA->elementos == NULL) {
        printf("Erro fatal: Memória insuficiente!\n");
        exit(1);
    }

    
    for (i = 0; i < conjA->quantidade; i++) {
        conjA->elementos[i] = rand() % 1001;
    }
    printf("Conjunto de %d elementos gerado com sucesso!\n", conjA->quantidade);
}