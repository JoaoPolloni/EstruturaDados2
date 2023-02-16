#ifndef CONTRATO
#define CONTRATO
#include "data.h"
typedef struct{
int codigo;
Data dataAss;
char cargo[50];
float salario;
}Contrato;
void imprimirContrato(Contrato c);
Contrato lerContrato( ) ;
#endif