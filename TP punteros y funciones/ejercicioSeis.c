/*
6. Contar el número de ocurrencias de un elemento en un arreglo usando
puntero y funciones
*/

#include <stdio.h>

void contarOcurrencias(int tamaño, int *numeros, int elemento) {
    int contador = 0;

    for(int i = 0; i < tamaño; i++) {
        if(*(numeros + i) == elemento) {
            contador++;
        }
    }
    
    printf("El numero %d se repite %d veces\n", elemento, contador);

}

int main() {

    int tamaño,elemento;

    printf("Ingrese la cantidadad de elementos del arreglo: ");
    scanf("%d", &tamaño);

    int numeros[tamaño];

    for(int i = 0; i < tamaño; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Ingrese que numero desea contar: ");
    scanf("%d", &elemento);

    contarOcurrencias(tamaño , numeros, elemento);
    
    return 0;
}