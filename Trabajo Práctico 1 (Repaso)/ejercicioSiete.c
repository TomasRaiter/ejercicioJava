/*
7) Realizar el mismo ejercicio anterior para los números pares e impares
*/

#include <stdio.h>

int cantidadNumeros, cantidadPares, cantidadNoPares, numero, continuar ;

int main(){

    do{
        printf("Ingrese un numero \n" );
        scanf("%d",& numero);
        
        cantidadNumeros++;
                
       if(numero % 2 == 0) {
        cantidadPares++; 
       } else{
        cantidadNoPares++;
       }
	         
        printf("Si desea continuar ingrese 1 \n");
        scanf("%d",& continuar);
        
    }while(continuar == 1);

printf("a) Ingreso %d numeros \n b) Dentro de esos numeros %d eran pares \n c) Dentro de los numeros ingresados %d no eran pares", cantidadNumeros, cantidadPares ,cantidadNoPares);

return 0;
}