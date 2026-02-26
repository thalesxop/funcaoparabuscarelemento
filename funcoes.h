#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct {
    int *elementos; 
    int quantidade;
} TConjunto;

void criarConjunto(TConjunto * const conjA);
void exibirConjunto(TConjunto const * const conjA);
int buscaSequencial(TConjunto const * const conjA, int elemento);
void liberarConjunto(TConjunto * const conjA);

#endif