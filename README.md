# funcaoparabuscarelementoBusca Sequencial Dinamica em C

Projeto modular para busca de elementos em conjuntos utilizando alocacao dinamica de memoria.

Organizacao de Arquivos
funcoes.h: Definicao da estrutura TConjunto e prototipos.

criarConjunto.c: Alocacao de memoria com malloc e preenchimento de dados.

exibirConjunto.c: Funcao para impressao do conjunto no console.

buscaSequencial.c: Algoritmo de busca que retorna o indice ou -1.

main.c: Fluxo principal com controle de buscas sucessivas.

Detalhes Tecnicos
Gerenciamento de Memoria: Alocacao via malloc baseada na entrada do usuario e liberacao via free no encerramento.

Sintaxe de Ponteiros: Acesso aos membros da struct realizado atraves de derreferenciacao explicita (*ponteiro).membro.

Assinatura de Funcao: Utilizacao de TConjunto const * const para garantir a integridade dos dados durante a busca.

Interatividade: Loop do-while para execucao de multiplas buscas conforme solicitado.