#ifdef DATA
#define DATA

typedef struct{
    int dia, mes, ano;
}Data;

void imprimirData(Data d);

Data lerData();

#endif