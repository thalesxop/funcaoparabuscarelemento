#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

int main() {
    srand(time(NULL));
    TConjunto meuConjunto;
    int opcaoMenu, valorBusca, resultado;
    char continuar;

    criarConjunto(&meuConjunto);

    do {
        printf("\nMenu Inicial\n");
        printf("1 - Mostrar array original\n");
        printf("2 - Busca sequencial\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 1:
                do {
                    exibirConjunto(&meuConjunto);
                    printf("\nDeseja ver novamente? (s/n): ");
                    scanf(" %c", &continuar);
                } while (continuar == 's' || continuar == 'S');
                break;

            case 2:
                do {
                    printf("\nQual valor (0-1000) deseja procurar? ");
                    scanf("%d", &valorBusca);
                    resultado = buscaSequencial(&meuConjunto, valorBusca);

                    if (resultado >= 0)
                        printf("Sucesso! Encontrado na posicao: %d\n", resultado);
                    else
                        printf("Valor nao encontrado no conjunto\n");

                    printf("\nDeseja buscar outro valor? (s/n): ");
                    scanf(" %c", &continuar);
                } while (continuar == 's' || continuar == 'S');
                break;

            case 3:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }
    } while (opcaoMenu != 3);

    liberarConjunto(&meuConjunto);

    return 0;
}