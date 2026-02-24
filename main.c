#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "funcoes.h"

int main() {
    
    srand(time(NULL)); 

    TConjunto meuConjunto;
    int valorBusca, resultado;
    char opcao;

    criarConjunto(&meuConjunto);
    exibirConjunto(&meuConjunto);
    do {
        printf("\nQual valor deseja procurar? ");
        scanf("%d", &valorBusca);

        resultado = buscaSequencial(&meuConjunto, valorBusca);

        if (resultado >= 0) {
            printf("Elemento encontrado na posicao: %d\n", resultado);
        } else {
            printf("-1 (Nao encontrado)\n");
        }

        printf("\nDeseja buscar outro valor? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    free(meuConjunto.elementos);
    return 0;
}
