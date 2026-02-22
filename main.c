#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    
    TConjunto meuConjunto;
    int valorBusca, resultado;
    char opcao;

    criarConjunto(&meuConjunto);

        exibirConjunto(&meuConjunto);

        do {
        printf("\nQual valor voce deseja buscar no conjunto? ");
        scanf("%d", &valorBusca);

                resultado = buscaSequencial(&meuConjunto, valorBusca);

        if (resultado >= 0) {
            printf("Sucesso! Elemento encontrado no indice: %d\n", resultado);
        } else {
            printf("-1 (O elemento nao existe no conjunto)\n");
        }

        printf("\nDeseja realizar outra busca? (s/n): ");
        
                scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    free(meuConjunto.elementos);
    
    printf("\nMemoria liberada com sucesso. Programa encerrado.\n");

    return 0;
}