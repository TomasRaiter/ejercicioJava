/*

*/

#include <stdio.h>
#include <string.h>

#define MAX 100
#define cant_palabras 5

void subCadenaMaxLarga(char palabras[cant_palabras][MAX], char masLarga[MAX]);
void apareceEnVarias(char subCadena[MAX], char palabras[cant_palabras][MAX]);

int main() {
    
    char palabras[cant_palabras][MAX];
    char masLarga[MAX];

    for(int i = 0; i < cant_palabras; i++) {
        printf("Ingrese la palabra %d: ", i + 1);
        fgets(palabras[i], MAX, stdin);
        palabras[i][strcspn(palabras[i], "\n")] = "\0";
    }

    subCadenaMasLarga(palabras, masLarga);



}


void subCadenaMasLarga(char palabras[cant_palabras][MAX], char masLarga[MAX]) {
    int maxLongitud = 0;
    char temp[MAX];

    for(int i = 0; i < cant_palabras; i++) {
        int longitud = strlen(palabras[i]);
        for(int j = 0; j < longitud; j++) {
            for(int k = j + 1; k < longitud; k++) {
                int subLongitud = k - j;
                strncpy(temp, palabras[i] + j, subLongitud);
                temp[subLongitud] = '\0'; 

                if(strlen(temp) > maxLongitud && aoareceEnVarias(temp, palabras)) {
                    maxLongitud = strlen(temp);
                    strcpy(masLarga, temp);
                }   
            }
        }; 

    }

}

void apareceEnVarias(char subCadena[MAX], char palabras[cant_palabras][MAX]) {
    int contador = 0;
    for(int i = 0; i < cant_palabras; i++) {
        if(strstr(palabras[i], subCadena) != NULL) {
            contador++;
        }
    }
    return contador > 1;
}