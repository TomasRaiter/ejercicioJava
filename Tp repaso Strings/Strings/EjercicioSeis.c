/*
6. Crea un programa que invierta el orden de las palabras en una cadena (por
ejemplo, "Hola mundo", se convierte en "mundo Hola").
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palabras[100];   
    char *newPalabras[100];   
    int i=0, j;

    printf("Ingrese la frase que desee:\n");
    fgets(palabras, sizeof(palabras), stdin);
    
    palabras[strcspn(palabras, "\n")] = '\0';  

    char *palabra = strtok(palabras, " ");

    while (palabra != NULL) {
        newPalabras[i] = palabra;   
        i++;
        palabra = strtok(NULL, " ");  
    }

    printf("La frase invertida es:\n");
    for (j = i-1; j >= 0; j--) {
        printf("%s ", newPalabras[j]);
    }

    return 0;
}
