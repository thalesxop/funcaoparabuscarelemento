#include <stdio.h>
#include "funcoes.h"

int main() {
    TConjunto meuConj;
    int alvo, res;
    char continuar;

    preencherConjunto(&meuConj);

    do {
        printf("\nValor para busca: ");
        scanf("%d", &alvo);

        res = buscaSequencial(&meuConj, alvo);

        if (res != -1) printf("Encontrado na posicao %d\n", res);
        else printf("-1 (Nao encontrado)\n");

        printf("Continuar? (s/n): ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}