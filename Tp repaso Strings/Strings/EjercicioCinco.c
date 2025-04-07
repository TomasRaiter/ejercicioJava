/*
Escribe un programa que cuente el número de palabras en una cadena
ingresada por el usuario.
*/

#include <stdio.h>
#include <string.h>

char palabras[150];
int  contPalabras = 0, enPalabra = 0;

int main(){

    printf("Ingrese una cadena de caracteres: ");
    fgets(palabras, sizeof(palabras), stdin);   
    palabras[strcspn(palabras, "\n")] = '\0'; 

    int longitud = strlen(palabras); 
    for (int i = 0; palabras[i] != '\0'; i++) {
        if ((palabras[i] >= 'A' && palabras[i] <= 'Z') || (palabras[i] >= 'a' && palabras[i] <= 'z') ||
            (palabras[i] == 'á' || palabras[i] == 'é' || palabras[i] == 'í' || palabras[i] == 'ó' || palabras[i] == 'ú') ||
            (palabras[i] == 'Á' || palabras[i] == 'É' || palabras[i] == 'Í' || palabras[i] == 'Ó' || palabras[i] == 'Ú')) {
            
            if (!enPalabra) {  
                contPalabras++;
                enPalabra = 1;
            }
        } else {
            enPalabra = 0;  
        }
    }

    printf("La cantidad de palabras ingresadas en la cadena %s por el usuario es de :%d\n",palabras, contPalabras);
    return 0;
}
