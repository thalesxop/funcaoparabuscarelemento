#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
#include "funcoes.h"

void criarConjunto(TConjunto * const conjA) {
    int i;
    
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &((*conjA).quantidade));

    (*conjA).elementos = (int *) malloc((*conjA).quantidade * sizeof(int));

    if ((*conjA).elementos == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        exit(1);
    }

    for (i = 0; i < (*conjA).quantidade; i++) {
        (*conjA).elementos[i] = rand() % 100; 
    }
    printf("Conjunto preenchido.\n");
}
