/*
4. Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario.
*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main(){

char letraUno, palabra[150], letraDos;

printf("Ingrese una cadena de caracteres: ");
fgets(palabra, sizeof(palabra), stdin);
palabra[strcspn(palabra, "\n")] = '\0';

printf("Ingrese la letra que desea reemplazar: ");
scanf(" %c", &letraUno);

printf("Ingrese la letra por la que desea reemplazar: ");
scanf(" %c", &letraDos);

int longitud = strlen(palabra);

for(int i = 0; i < longitud; i++){
    if(palabra[i] == letraUno){
        palabra[i] = letraDos;
    }
}

printf("%s\n", palabra);
return 0;

}