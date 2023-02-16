#ifndef HASH
#define HASH
#include "pessoa.h"
void inicializarTabeIa(Pessoa t[], int tam);
int funcaoHash( int chave, int tam);
void inserir(Pessoa t[], int tam);
Pessoa* busca(Pessoa t[],int chave, int tam);
void imprimir(Pessoa t[], int tam);
#endif