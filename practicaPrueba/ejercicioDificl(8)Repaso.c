#include <stdio.h>
#include <stdbool.h> 

void obtenerNumeros(int cantidad, int numeros[]);
bool esPrimo(int numero);
void ordenarVector(int vector[], int cantidad, int ordenAscendente);
void clasificarYOrdenar(int cantidad, int numeros[]);

int main() {

    int cantidadNumeros;
    printf("Ingrese la cantidad de numeros a ingresar: ");
    scanf("%d", &cantidadNumeros);

    int numeros[cantidadNumeros];

    obtenerNumeros(cantidadNumeros, numeros);
    clasificarYOrdenar(cantidadNumeros, numeros);

    return 0;
}

void obtenerNumeros(int cantidad, int numeros[]) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    return;
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) { 
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void ordenarVector(int vector[], int cantidad, int ordenAscendente) {
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = i + 1; j < cantidad; j++) {
            if ((ordenAscendente && vector[i] > vector[j]) || (!ordenAscendente && vector[i] < vector[j])) {
                int aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
    return;
}

void clasificarYOrdenar(int cantidad, int numeros[]) {
    int primos[cantidad];
    int impares[cantidad];
    int pares[cantidad];
    int cantPrimos = 0, cantImpares = 0, cantPares = 0;

    for (int i = 0; i < cantidad; i++) {
        if (esPrimo(numeros[i])) {
            primos[cantPrimos++] = numeros[i];
        } 
        if (numeros[i] % 2 != 0) {
            impares[cantImpares++] = numeros[i];
        } else {
            pares[cantPares++] = numeros[i];
        }
    }

    ordenarVector(primos, cantPrimos, 1); 
    ordenarVector(impares, cantImpares, 0); 
    ordenarVector(pares, cantPares, 1); 

    printf("\nVector ordenado:\n");

    for (int i = 0; i < cantPrimos; i++) {
        printf("%d ", primos[i]);
    }
    for (int i = 0; i < cantImpares; i++) {
        printf("%d ", impares[i]);
    }
    for (int i = 0; i < cantPares; i++) {
        printf("%d ", pares[i]);
    }

    return;
}
