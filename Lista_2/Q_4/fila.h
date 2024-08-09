#define MAX 100
#include<stdbool.h>

typedef struct FILA{
	 const char* vet[MAX];
	 int inicio,final,res;
}FILA;

FILA* criar_fila();
void inserir_na_fila(FILA* fila,char *valor);
void mostrar_fila(FILA* fila);
char* remover_fila(FILA* fila);
bool operador(char *item);
int calcular(char op,int num1,int num2);
void prefixa(FILA* fila);




