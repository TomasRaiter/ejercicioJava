/*
10. Desarrolla un programa que busque la primera aparición de una
subcadena dentro de una cadena más larga. Mencionar si dicha subcadena
se encuentra y en qué posición se empieza.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    char busqueda[100], buscar[100];    

    printf("Ingrese la cadena en la que quiere buscar: ");
    fgets(busqueda, sizeof(busqueda), stdin);
    busqueda[strcspn(busqueda, "\n")] = '\0'; 
    
    printf("Ingrese la cadena a buscar dentro de la cadena: ");
    fgets(buscar, sizeof(buscar), stdin);
    buscar[strcspn(buscar, "\n")] = '\0';
    
    char *pos = strstr(busqueda, buscar); 
    if (pos != NULL) {
        int index = pos - busqueda; 
        printf("La subcadena se encuentra en la posicion: %d\n", index);
    } else {
        printf("La subcadena no se encuentra en la cadena.\n");
    }    
    
    return 0;   
}