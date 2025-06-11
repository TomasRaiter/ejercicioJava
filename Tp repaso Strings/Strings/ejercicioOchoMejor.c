#include <stdio.h>
#include <string.h>

#define MAX 100
#define CANT_PALABRAS 5

// Función para verificar si una subcadena está en todas las palabras (al menos en dos)
int apareceEnVarias(char *sub, char palabras[CANT_PALABRAS][MAX]) {
    int contador = 0;
    for (int i = 0; i < CANT_PALABRAS; i++) {
        if (strstr(palabras[i], sub)) {
            contador++;
        }
    }
    return contador > 1;
}

void subcadenaMasLarga(char palabras[CANT_PALABRAS][MAX], char resultado[MAX]) {
    char temp[MAX] = "";
    int maxLen = 0;

    for (int i = 0; i < CANT_PALABRAS; i++) {
        int len = strlen(palabras[i]);
        for (int j = 0; j < len; j++) {
            for (int k = j + 1; k <= len; k++) {
                int subLen = k - j;
                strncpy(temp, palabras[i] + j, subLen);
                temp[subLen] = '\0';

                if (strlen(temp) > maxLen && apareceEnVarias(temp, palabras)) {
                    maxLen = strlen(temp);
                    strcpy(resultado, temp);
                }
            }
        }
    }
}

int main() {
    char palabras[CANT_PALABRAS][MAX];
    char resultado[MAX] = "";

    for (int i = 0; i < CANT_PALABRAS; i++) {
        printf("Ingrese palabra %d: ", i + 1);
        fgets(palabras[i], MAX, stdin);
        palabras[i][strcspn(palabras[i], "\n")] = '\0';
    }

    subcadenaMasLarga(palabras, resultado);

    if (strlen(resultado) > 0)
        printf("\nLa subcadena más larga repetida es: %s\n", resultado);
    else
        printf("\nNo hay subcadena repetida\n");

    return 0;
}