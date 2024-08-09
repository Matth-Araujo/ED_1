#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main() {
    
    FILA* fila = criar_fila();
   
  
    inserir_na_fila(fila, 1);
    inserir_na_fila(fila, 2);
    inserir_na_fila(fila, 3);
    inserir_na_fila(fila, 4);
    inserir_na_fila(fila, 5);
    inserir_na_fila(fila, 6);
    printf("Tamanho da fila: %d\n", tamanho_fila(fila));
    printf("\n");
    mostrar_fila(fila);
    printf("\n");
      
    int valor;
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

