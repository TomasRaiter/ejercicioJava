#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char apellido[50];
    int DNI;
} Persona;

int ingresarDatos(Persona personas[], int cantidad) {
    FILE *archivo;
    Persona persona;
    bool dniExiste;
    int i;

    printf("Ingrese el nombre: ");
    fgets(persona.nombre, sizeof(persona.nombre), stdin);
    persona.nombre[strcspn(persona.nombre, "\n")] = '\0'; 

    printf("Ingrese el apellido: ");
    fgets(persona.apellido, sizeof(persona.apellido), stdin);
    persona.apellido[strcspn(persona.apellido, "\n")] = '\0';

    do {
        printf("Ingrese el DNI: ");
        scanf("%d", &persona.DNI);
        getchar(); // limpiar buffer
        dniExiste = false;

        for (i = 0; i < cantidad; i++) {
            if (personas[i].DNI == persona.DNI) {
                printf("El DNI ingresado ya existe. Ingrese uno diferente.\n");
                dniExiste = true;
                i = cantidad; // Salir del bucle for
            }
        }
    } while(dniExiste);

    // Guardar en el arreglo
    personas[cantidad] = persona;
    cantidad++;

    // Guardar en el archivo
    archivo = fopen("datos.txt", "a");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return cantidad;
    }

    fprintf(archivo, "%s,%s,%d\n", persona.nombre, persona.apellido, persona.DNI);
    fclose(archivo);

    return cantidad;
}

// Función para buscar por DNI
void buscarPorDNI(Persona personas[], int cantidad) {
    int dni;
    bool encontrado = false;
    printf("Ingrese el DNI a buscar: ");
    scanf("%d", &dni);
    getchar();

    for (int i = 0; i < cantidad; i++) {
        if (personas[i].DNI == dni) {
            printf("Persona encontrada: %s %s\n", personas[i].nombre, personas[i].apellido);
            encontrado = true;
            i = cantidad;
        }
    }

    if (!encontrado) {
        printf("No se encontró una persona con ese DNI.\n");
    }
}

// Función para buscar por nombre y apellido
void buscarPorNombreApellido(Persona personas[], int cantidad) {
    char nombre[50], apellido[50];
    bool encontrado = false;

    printf("Ingrese el nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese el apellido: ");
    fgets(apellido, sizeof(apellido), stdin);
    apellido[strcspn(apellido, "\n")] = '\0';

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(personas[i].nombre, nombre) == 0 && strcmp(personas[i].apellido, apellido) == 0) {
            printf("Persona encontrada: DNI %d\n", personas[i].DNI);
            encontrado = true;
            i = cantidad; 
        }
    }

    if (!encontrado) {
        printf("No se encontró una persona con ese nombre y apellido.\n");
    }
}

// Función para ordenar por DNI (Burbuja simple)
void ordenarDatos(Persona personas[], int cantidad) {
    Persona aux;
    for (int i = 0; i < cantidad-1; i++) {
        for (int j = 0; j < cantidad-i-1; j++) {
            if (personas[j].DNI > personas[j+1].DNI) {
                aux = personas[j];
                personas[j] = personas[j+1];
                personas[j+1] = aux;
            }
        }
    }
}

// Programa principal
int main() {
    Persona personas[100];
    int cantidad = 0;
    int opcion;
    bool continuar = true;

    while (continuar) {
        printf("\n--- Menu ---\n");
        printf("1) Ingresar datos\n");
        printf("2) Buscar por DNI\n");
        printf("3) Buscar por nombre y apellido\n");
        printf("4) Ordenar datos\n");
        printf("5) Salir\n");
        printf("Ingrese la opción deseada: ");
        scanf("%d", &opcion);
        getchar(); // limpiar buffer

        switch(opcion) {
            case 1:
                cantidad = ingresarDatos(personas, cantidad);
                break;
            case 2:
                buscarPorDNI(personas, cantidad);
                break;
            case 3:
                buscarPorNombreApellido(personas, cantidad);
                break;
            case 4:
                ordenarDatos(personas, cantidad);
                break;
            case 5:
                continuar = false;
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    }

    return 0;
}
