#include <stdio.h>
#include "funcoes.h"

void preencherConjunto(TConjunto * const conjA) {
    int i;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &((*conjA).quantidade));

    for (i = 0; i < (*conjA).quantidade; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &((*conjA).elementos[i]));
    }
}