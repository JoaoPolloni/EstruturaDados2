#include <stdio.h>
#include "hash.h"

#define TAM 15

int main(void) {
    int opcao, valor, retorno;
    Pessoa *buscar, tabela[TAM];

    inicializarTabela(tabela, TAM);

    do{
        printf("\n0 - Sair\n1 - Inserir\n2 - Buscar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch( opcao ){
            case 1:
                inserir(tabela, TAM);
                break;
            case 2:
                printf( "\nCPF: ");
                scanf( "%d", &valor);
                buscar = busca(tabela, valor, TAM);
                if(buscar){
                    printf( "\nCPF encontrado\n");
                    imprimirPessoa(*buscar);
                }
                else
                    printf("\nCPFnäo encontrado.\n");
                break;
            case 3:
                imprimir(tabela, TAM);
                break;
            default:
                printf("\nOpcao invalida.\n");
            }
        }while (opcao != 0);
    }        