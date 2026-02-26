#include <stdlib.h>
#include "funcoes.h"

void liberarConjunto(TConjunto * const conjA) {
    if (conjA->elementos != NULL) {
        free(conjA->elementos); 
        conjA->elementos = NULL;
        conjA->quantidade = 0;
    }
}