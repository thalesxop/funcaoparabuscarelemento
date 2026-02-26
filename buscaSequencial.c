#include "funcoes.h"

int buscaSequencial(TConjunto const * const conjA, int elemento) {
    int i;
    for (i = 0; i < conjA->quantidade; i++) {
        if (conjA->elementos[i] == elemento) {
            return i; 
        }
    }
    return -1; 
}