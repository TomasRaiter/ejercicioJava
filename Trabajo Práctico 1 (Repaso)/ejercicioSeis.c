/*
6) Dada una lista de números informar
  a) la cantidad de números ingresada
  b) la cantidad de números que son primos
  c) la cantidad de números que no son primos
*/

#include <stdio.h>

int cantidadNumeros, cantidadPrimos, cantidadNoPrimos, numero, divisores, continuar;

int main(){

    do{
        printf("Ingrese un numero \n");
        scanf("%d",& numero);
        
        cantidadNumeros++;
        divisores = 0;        
        
        for(int i = 1; i <= numero; i++){
            if(numero % i == 0){
                divisores++;
            }
        }
        if(divisores == 2){
            cantidadPrimos++;
        } else{
            cantidadNoPrimos++;
         }
         
        printf("Si desea continuar ingrese 1 \n");
        scanf("%d",& continuar);
        
    }while(continuar == 1);

printf("a) Ingreso %d numeros \n b) Dentro de esos numeros %d eran primos \n c) Dentro de los numeros ingresados %d no eran primos", cantidadNumeros, cantidadPrimos ,cantidadNoPrimos);

return 0;
}