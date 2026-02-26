#include <stdio.h>
#include "funcoes.h"

void exibirConjunto(TConjunto const * const conjA) {
    int i;
    printf("\nElementos do Conjunto:\n[ ");
    for (i = 0; i < conjA->quantidade; i++) {
        printf("%d ", conjA->elementos[i]);
    }
    printf("]\n");
}