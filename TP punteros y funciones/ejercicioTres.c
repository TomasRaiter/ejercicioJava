/*
3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.
*/

#include <stdio.h>

void mayorMenor(float *mayor, float *menor, int tamaño, float *numeros) {
    *menor = *numeros; // Le asigno a menor el primer elemento del array, es como el i == 0
    *mayor = *numeros; // Lo mismo que con el menor pero con el mayor
    for(int i = 0; i < tamaño; i++) {
        if(*(numeros + i) > *mayor) {  
            *mayor = *(numeros + i); 
        }
        if(*(numeros + i) < *menor) { 
            *menor = *(numeros + i); 
        }
    }
}

int main() {
    int tamaño;
    float mayor = 0, menor = 0;

    printf("Ingrese cuantos numeros ingresara: ");
    scanf("%d", &tamaño);

    float numeros[tamaño]; 

    for(int i = 0; i < tamaño; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    mayorMenor(&mayor, &menor, tamaño, numeros); 

    printf("El mayor numero es: %.2f y el menor es de %.2f \n", mayor, menor); 

    return 0;
}