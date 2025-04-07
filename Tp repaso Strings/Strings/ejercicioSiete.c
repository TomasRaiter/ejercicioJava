/*
7. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo amor y roma;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char palabra1[150], palabra2[150], letra1, letra2, palabra3[150], palabra4[150], aux1, aux2;
    int resultado;
    
    printf("Ingrese la primer palabra ");
    fgets(palabra1,sizeof(palabra1),stdin);
    
    printf("Ingrese la segunda palabra ");
    fgets(palabra2, sizeof(palabra2), stdin);
    
    palabra1[strcspn(palabra1,"\n")] = '\0';
    palabra2[strcspn(palabra2,"\n")] = '\0';   
    
    int longitud = strlen(palabra2);
    
    strcpy(palabra3, palabra1);
    strcpy(palabra4, palabra2);
    
    for (int i = 0; palabra2[i] != '\0'; i++) {
        palabra2[i] = tolower(palabra2[i]);
        palabra1[i] = tolower(palabra1[i]);
    }
    palabra3[strlen(palabra2)] = '\0';
    palabra4[strlen(palabra1)] = '\0';

    for (int i = 0; i < longitud - 1; i++) {
        for (int j = i + 1; j < longitud; j++) {
            if (palabra1[i] > palabra1[j]) {
                char temp = palabra1[i];
                palabra1[i] = palabra1[j];
                palabra1[j] = temp;
            }
            if (palabra2[i] > palabra2[j]) {
                char temp = palabra2[i];
                palabra2[i] = palabra2[j];
                palabra2[j] = temp;
            }
        }
    }

    resultado = strcmp(palabra1, palabra2);
    
    if(resultado == 0) {
        printf("La palabra %s es un anagrama de %s \n",palabra3, palabra4);
    }else {
        printf("La palabra %s no es un anagrama de %s \n",palabra3, palabra4);
    }

    return 0;   
}