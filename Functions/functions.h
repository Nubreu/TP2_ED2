#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../TAD/tad.h"

void imprimeArquivo(FILE *arquivo, int numeroItens);

void parametrosParaInteiro(int numeroArgumentos, char **argumentos, int *metodo, int *quantidade, int *situacao, int *P);

FILE* validaEntrada(int numeroArgumentos, int metodo, int qauntidade, int situacao, int P);

void substituicaoSelecao(FILE *arquivo, Fita *fitas, int numeroAlunos);

Fita* iniciaFitas(int numeroFitas);

#endif