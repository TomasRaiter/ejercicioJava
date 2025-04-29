/*
2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.
*/
#include <stdio.h>

float promedio(int * numeros, int numNumeros);
int suma(int * numeros, int numNumeros);

int main(){

    int numNumeros;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &numNumeros);
    
    int numeros[numNumeros];

    for(int i = 0; i < numNumeros; i++){
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    suma(numeros, numNumeros);
    promedio(numeros, numNumeros);

return 0;
}

int suma(int * numeros, int numNumeros){

    int suma = 0;

    for(int i = 0; i < numNumeros; i++){
        suma += *(numeros + i);
    }

    printf("\nLa suma es: %d\n");
    return suma;

}

float promedio(int * numeros, int numNumeros) {

    float promedio = suma(numeros, numNumeros) / numNumeros;
    printf("\nEl promedio es:\n");

    return (float)promedio;
}