/*
1) Realizar un programa en el cual se ingresen los siguientes datos Nombre, Apellido y
DNI
a) Crear un menú donde se ingresen los datos y los guarde en un archivo
b) Otro ítem donde se pueda realizar una búsqueda por DNI y devuelva los datos de
Nombre y apellido
c) Salir del mismo
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
 
    FILE *datos;
    char nombre[30], apellido[30];
    bool continuar = true;
    int op, DNI, DNIBuscado;
    do{
        printf("Ingrese una opcion: ");
        printf("1. Ingresar datos\n");
        printf("2. Buscar por DNI\n");
        printf("3. Salir\n");
        scanf("%d", &op);

        switch(op){

            case 1:

            printf("Ingrese nombre: ");
            scanf("%s", nombre);
            printf("Ingrese apellido: ");
            scanf("%s", apellido);
            printf("Ingrese DNI: ");   
            scanf("%d", &DNI);

            datos = fopen("datos.txt", "a+");
            
            if(datos == NULL){
                printf("No se pudo abrir el archivo\n");
                return 1;
            }

            fprintf(datos, "%s %s %d\n", nombre, apellido, DNI);

            fclose(datos);

            break;
            
            case 2:

            printf("Ingrese que DNI desea buscar: ");
            scanf("%d", &DNIBuscado);

            datos = fopen("datos.txt", "r");

            if(datos == NULL){
                printf("No se pudo abrir el archivo\n");
                return 1;
            }          

            while(fscanf(datos, "%s %s %d", nombre, apellido, &DNI) != EOF){
                if(DNI == DNIBuscado){
                    printf("Nombre: %s\n", nombre);
                    printf("Apellido: %s\n", apellido);
                    printf("DNI: %d\n", DNI);
                }
            }
            
            fclose(datos);

            break;

            
            case 3:
                continuar = false;
            break;

        }
    }while(continuar);

    return 0;

}