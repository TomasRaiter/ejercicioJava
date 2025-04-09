/*
4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.
*/

#include <stdio.h>

void copyArray(float *numeros, int tamaño) {
  float newArray[tamaño];

  for(int i = 0; i < tamaño; i++) {
    *(newArray + i) = *(numeros + i);
  }

}


int main() {
    int tamaño;
    
    printf("Ingrese cuantos numeros ingresara: ");
    scanf("%d", &tamaño);

    float numeros[tamaño];

    for(int i = 0; i < tamaño; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    copyArray(numeros, tamaño); 

    printf("El nuevo array es: ");
    for(int i = 0; i < tamaño; i++) {
        printf("\n %.2f", *(numeros + i)); 
    }

    return 0;
}