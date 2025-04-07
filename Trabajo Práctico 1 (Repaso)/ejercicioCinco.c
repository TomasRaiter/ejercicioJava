/*
5) Al ingresar un número se debe informar si es primo o no es primo
*/

#include <stdio.h>

int numero,i, n, divisores;
int main(){

    printf("Ingrese un numero \n");
    scanf("%d",&numero);
    n = numero;
    for( i = 1; i <= n; i++){
        if(numero % i == 0) {
            divisores++;
        }
    }
    if(divisores == 2 && numero > 1){
        printf("El numero ingresado es un numero primo");
    } else{
        printf("El numero ingresado no es un numero primo");
    }
    
    return 0;
}
