#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void criarConjunto(TConjunto * const conjA) {
    int i;
    printf("Quantos elementos terá o seu conjunto? ");
    scanf("%d", &((*conjA).quantidade));

    
    (*conjA).elementos = (int *) malloc((*conjA).quantidade * sizeof(int));

    if ((*conjA).elementos == NULL) {
        printf("Erro: Memória insuficiente!\n");
        exit(1);
    }

    for (i = 0; i < (*conjA).quantidade; i++) {
        printf("Digite o valor para a posicao [%d]: ", i);
        scanf("%d", &((*conjA).elementos[i]));
    }
}