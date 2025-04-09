/*
1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales.
*/

#include <stdio.h>

void intercambio(float *a, float *b) {//*a y *b son punteros que apuntan a la dirección de memoria de las variables a y b respectivamente.
  float aOriginal = *a;// Guardo el valor del puntero para no perderlo
  float bOriginal = *b; //lo mismo con b

  *a = *b; 
  *b = aOriginal;
  //si no pongo * no son punteros

  printf("Los valores iniciales de a y b son de %.2f y %.2f. Y los valores finales son %.2f y %.2f respectivamente \n", aOriginal, bOriginal, *a, *b);
}

int main() {
  float a, b;

  printf("Ingrese que valor desea para a: ");
  scanf("%f", &a);

  printf("Ingrese que valor desea para b: ");
  scanf("%f", &b);

  intercambio(&a, &b); //
  
  return 0;
}