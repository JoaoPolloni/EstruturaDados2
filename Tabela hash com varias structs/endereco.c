#include <stdio.h>
#include "endereco.h"

void imprimirEndereco( Endereco end){
printf("\tDados do Endereço\n" ) ;
printf( "\nRua: %s", end.rua);
printf("\nNumero %d", end.num);
printf("\nBairro: %s",end.bairro);
printf("\nCidade: %s",end.cidade);
printf("\nPais: %s",end.pais);
printf("\nCEP: %s",end.cap);
}

Endereco lerEndereco( ){
Endereco end;
printf( "\nRua:")
fgets(end.rua, 49, stdin);
printf("\nNº: ");
scanf( "%d", &end. num);
printf( "\nBairro: ")
fgets(end.bairro, 49, stdin);
printf( "\nCEP: ")
scanf( "%d", &end,cep);
printf( " \nCidade: ")
fgets(end.cidade, 49, stdin);
printf( "\nPaís: ")
fgets(end.pais, 49, stdin);
getchar( ) ;
return end;
}