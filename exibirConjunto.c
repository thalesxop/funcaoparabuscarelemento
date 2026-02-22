#include <stdio.h>
#include "funcoes.h"

void exibirConjunto(TConjunto const * const conjA) {
    int i;
    printf("\nConteudo do Conjunto\n");
    
    for (i = 0; i < (*conjA).quantidade; i++) {
        printf("Posicao [%d]: %d\n", i, (*conjA).elementos[i]);
    }
    printf("----------------------------\n");
}