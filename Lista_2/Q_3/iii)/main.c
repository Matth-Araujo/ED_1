#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main() {
    
    FILA* fila = criar_fila();
   
  
    inserir_na_fila(fila, "28");
    inserir_na_fila(fila, "30");
    inserir_na_fila(fila, "31");
    inserir_na_fila(fila, "40");
    inserir_na_fila(fila, "33");
    inserir_na_fila(fila, "60");
    printf("Tamanho da fila: %d\n", tamanho_fila(fila));
    printf("\n");
    mostrar_fila(fila);
    printf("\n");
      
    void* valor;
    consultar_fila(fila, &valor);
    printf("Removendo da fila: %d\n", valor);
    remover_fila(fila);
    consultar_fila(fila, &valor);
    printf("Removendo da fila: %d\n", valor);
    remover_fila(fila);
    consultar_fila(fila, &valor);
    printf("Removendo da fila: %d\n", valor);
    remover_fila(fila);
    printf("\n");
    printf("Tamanho da fila: %d\n", tamanho_fila(fila));
    printf("\n");
    mostrar_fila(fila);
    printf("\n");
    
  
    liberar_fila(fila);
    
    return 0;
}


