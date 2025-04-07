#include <stdio.h>
#include <string.h>

/*
2. Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario.
*/

int main() {
    char palabra[30];
    int contVocales = 1; // Inicializamos en 1 para contar la primera vocal

    printf("Ingrese la palabra de la que quiere saber cuántas vocales posee: ");
    fgets(palabra, sizeof(palabra), stdin); 
	
	// Eliminar el salto de línea al final de la cadena
    palabra[strcspn(palabra, "\n")] = '\0';

    for (int i = 0; i < strlen(palabra); i++) {
        char letra = palabra[i];  // Captura el caracter actual

        // Verifica si es una vocal (minúscula o mayúscula)
        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' ||
            letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' ||
            letra == 'u' || letra == 'U' || letra == 'á' || letra == 'Á' ||
			letra == 'é' || letra == 'É' || letra == 'í' || letra == 'Í' ||
			letra == 'ó' || letra == 'Ó' || letra == 'ú' || letra == 'Ú') {
            contVocales++;
        }
    }

    printf("La cantidad de vocales en \"%s\" es: %d\n", palabra, contVocales);

    return 0;
}
