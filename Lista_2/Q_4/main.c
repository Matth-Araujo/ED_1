#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main() {
    
    FILA* fila = criar_fila();
   
  
    inserir_na_fila(fila, "-");
    inserir_na_fila(fila, "+");
    inserir_na_fila(fila, "*");
    inserir_na_fila(fila, "9");
    inserir_na_fila(fila, "+");
    inserir_na_fila(fila, "2");
    inserir_na_fila(fila, "8");
    inserir_na_fila(fila, "*");
    inserir_na_fila(fila, "+");
    inserir_na_fila(fila, "4");
    inserir_na_fila(fila, "8");
    inserir_na_fila(fila, "6");
    inserir_na_fila(fila, "3");
 
    printf("\n");
   	mostrar_fila(fila);
    printf("\n");
    
    prefixa(fila);
    printf("O resultado foi: %d\n", fila->res);
     
    return 0;
}


