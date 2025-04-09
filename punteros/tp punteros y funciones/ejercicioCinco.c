/*
5. Concatenar dos cadenas usando punteros y funciones.
*/

#include <stdio.h>
#include <string.h>

void concatenar ( char *p1, char *p2, char *palabra1, char *palabra2, char *concatenado){
    p1 = palabra1;
    p2 = palabra2;

    int tamaño1 = strlen(palabra1);
    int tamaño2 = strlen(palabra2);
    int tamañoSum = tamaño1 + tamaño2;
    
    for(int i = 0; i < (tamaño1); i++) {
        if(i < tamaño1) {
            *(concatenado + i) = *(p1 + i); // Copia la primera cadena en la nueva cadena
        } 
    *(concatenado + tamaño1) = '\0'; 
    }
    
    for(int i = 0; i< tamaño2; i++) {
        if(i < tamaño2) {
            *(concatenado + tamaño1 + i) += *(p2 + i); 
        }
    *(concatenado + tamañoSum) = '\0';
    }
}




int main(){

    char palabra1[100], palabra2[100], concatenado[200], *p1, *p2;

    printf("Ingrese la primera cadena: ");
    fgets(palabra1, sizeof(palabra1), stdin);
    palabra1[strcspn(palabra1, "\n")] = 0;
    
    printf("Ingrese la segunda cadena: ");  
    fgets(palabra2, sizeof(palabra2), stdin);
    palabra2[strcspn(palabra2, "\n")] = 0;

    concatenar(p1, p2, palabra1, palabra2, concatenado);
    
    printf("La cadena concatenada es: %s", concatenado);

    
}