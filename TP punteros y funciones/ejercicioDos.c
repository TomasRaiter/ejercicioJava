/*
2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.
*/
#include <stdio.h>

void sumProm(float *numeros, int tamaño, float *suma, float *prom) {
    for (int i = 0; i < tamaño; i++) {
        *suma += *(numeros + i); // *(numeros + i) es lo mismo que numeros[i] pq le suma el tamaño que ocupa un float al puntero de numeros entonces va de celda en celda del vector
    }
    *prom = *suma / tamaño; 
}

int main() {
    int tamaño;
    float suma = 0, prom = 0; 

    printf("Ingrese cuantos numeros ingresara: ");
    scanf("%d", &tamaño);

    float numeros[tamaño]; 

    for(int i = 0; i < tamaño; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    sumProm(numeros, tamaño, &suma, &prom); 
    printf("La suma de los numeros es: %.2f y el promedio es de %.2f \n", suma, prom); 

    return 0;
}