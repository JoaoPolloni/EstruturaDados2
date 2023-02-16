#include <stdio.h>
#include "pessoa.h"
void imprimirPessoa(Pessoa p){
printf("\tDados da Pessoa\n");
printf("\nNome: %s", p.nome);
printf("\nCPF: %d", p.cpf);
printf("\nData de nascimento: ");
imprimirData(p.dataNas) ;
imprimirEndereco(p.end) ;
imprimirContrato(p.contr);
}
Pessoa lerPessoa( ){
Pessoa p;
printf( "\nNome: ");
fgets(p.nome, 49, stdlin);
printf("\nCPF : ");
scanf("%d", &p.cpf);
printf( "\nData de nascimento: ");
p. dataNas = lerData();
p. contr = lerContrato();
p. end = lerEndereco( ) ;
getchar();
return p;
}