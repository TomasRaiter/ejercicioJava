/*

*/

#include <stdio.h>
#include <string.h>

#define MAX 100

void concatenar(char *cadena1, char *cadena2, char *resultado) {
   
}

int main(){

    char cadena1[MAX], cadena2[MAX], resultado[MAX * 2];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, MAX, stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, MAX, stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';

    concatenar(cadena1, cadena2, resultado);

    return 0;
}

void concatenar(char *cadena1, char *cadena2, char *resultado){

    int i = 0;

    while(cadena1[i] != '\0'){
        resultado[i] = cadena1[i];
        i++;
    }
    
    i = 0;
    int longitud = strlen(cadena1);
    
    while(cadena2[i] != '\0'){
        resultado[i + longitud] = cadena2[i];
        i++;
    }
    resultado[i + longitud] = '\0';

    printf("La cadena concatenada es: %s\n", resultado);
}