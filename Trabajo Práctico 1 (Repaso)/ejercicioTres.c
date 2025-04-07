/*
3) Se solicita realizar un software que pida al usuario los datos de los catetos de un triángulo
rectángulo y luego me informe cual es el valor de su hipotenusa
*/

#include <stdio.h>
#include <math.h>
float catetetoUno, catetoDos, hipotenusa;

int main() {
 
    printf("Ingrese la medida del primer cateto \n");
    scanf("%f",& catetetoUno);
    
    printf("Ingrese la medida del segundo cateto \n");
    scanf("%f",& catetoDos);
    
    hipotenusa = sqrt(catetoDos * catetoDos + catetetoUno * catetetoUno);
    
    printf("El resultado de la hipotenusa es de %f\n",hipotenusa);

    return 0;
}