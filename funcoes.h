#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct {
    int elementos[100];
    int quantidade;
} TConjunto;

void preencherConjunto(TConjunto * const conjA);
int buscaSequencial(TConjunto const * const conjA, int elemento);

#endif