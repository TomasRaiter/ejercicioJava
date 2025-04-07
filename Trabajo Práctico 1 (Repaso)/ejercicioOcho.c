/*
8) Dado un vector con números ordenarlo con los siguientes criterios prioritarios
  a) números primos de menor a mayor
  b) números impares de mayor a menor
  c) Números pares de menor a mayor
*/

#include <stdio.h>

int cantidad,cantidadPares=0,cantidadPrimos=0,cantidadImpares=0, n;

int esPrimo(int n){
    int divisores = 0;
    for(int i = 1; i <= n; i++){
        if(n % i ==0){
            divisores++;
        }
    }
    if(divisores == 2){
        return 1;
    }
    return 0;
}

int esPar(int n){
        if(n % 2 == 0){
            return 1;
        }
    return 0;
}

int main(){

    printf("Ingrese cuantos numeros quiere ingresar \n");
    scanf("%d",&cantidad);
    
    int numeros[cantidad];

    for(int i = 0; i < cantidad; i++){
        printf("Ingrese el numero %d \n", i+1);
        scanf("%d",& numeros[i]);
        
        n = numeros[i];

       if(esPar(n) == 1){
        cantidadPares++;
       }else{
        cantidadImpares++;
       }
       if(esPrimo(n) == 1){
        cantidadPrimos++;
       }
        
    }

    int primos[cantidadPrimos], pares[cantidadPares], impares[cantidadImpares], indicePares = 0, indiceImpares = 0, indicePrimos= 0;

    
    for(int i = 0; i < cantidad ; i++){
        n =numeros[i];
        if(esPar(n) == 1){
            pares[indicePares++] = numeros[i];
        }else{
            impares[indiceImpares++] = numeros[i];
        }
       if(esPrimo(n) == 1){
            primos[indicePrimos++] = numeros[i];
       }
    }

    for (int i = 0; i < cantidadImpares - 1; i++) {
        for (int j = 0; j < cantidadImpares - 1 - i; j++) {
            if (impares[j] < impares[j + 1]) {
                int aux = impares[j];
                impares[j] = impares[j + 1];
                impares[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < cantidadPares - 1; i++) {
        for (int j = 0; j < cantidadPares - 1 - i; j++) {
            if (pares[j] > pares[j + 1]) {
                int aux = pares[j];
                pares[j] = pares[j + 1];
                pares[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < cantidadPrimos - 1; i++) {
        for (int j = 0; j < cantidadPrimos - 1 - i; j++) {
            if (primos[j] > primos[j + 1]) {
                int aux = primos[j];
                primos[j] = primos[j + 1];
                primos[j + 1] = aux;
            }
        }
    }

    printf("Numeros primos de menor a mayor: \n");
    for(int i = 0; i < cantidadPrimos; i++){
        printf("%d, ", primos[i]);
    }

    printf(" \nNumeros impares de mayor a menor: \n");
    for(int i = 0; i < cantidadImpares; i++){
        printf("%d, " , impares[i]);
    }
    
    printf(" \nNumeros pares de menor a mayor: \n");
    for(int i = 0; i < cantidadPares; i++){
        printf("%d, ", pares[i]);
    }
    
    return 0;
    
}