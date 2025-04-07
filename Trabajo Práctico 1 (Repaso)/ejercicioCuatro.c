/*
3) Se solicita realizar un software que pida al usuario los datos de los catetos de un triángulo
rectángulo y luego me informe cual es el valor de su hipotenusa

4) Realizar una modificación al programa anterior, para el ingreso de dos de cualquiera de sus
lados, y me devuelva el valor de sus catetos y de su hipotenusa


primer opcion  : Ingresa hipotenusa y adyacente
segunda opcion : Ingresa hipotenusa y opuesto
tercer opcion  : Ingresa opuesto y adyacente

*/

#include <stdio.h>
#include <math.h>
float catetetoUno, op, catetoDos, catetoIncognita,catetoMinIngresado, posibleHipotenusa, hipotenusa,catetoMaxIngresado;

int main() {
 
	printf("Ingrese la medida del primer cateto \n");
    scanf("%f",& catetetoUno);
    
    printf("Ingrese la medida del segundo cateto \n");
    scanf("%f",& catetoDos);
    
    if(catetetoUno > catetoDos) {
    catetoMaxIngresado = catetetoUno;
    catetoMinIngresado = catetoDos;
	} else{
    catetoMaxIngresado = catetoDos;
    catetoMinIngresado = catetetoUno;
	} 
 
 	printf("Ingresare 1 si ingreso 2 catetos o 2 si ingreso un cateto y la hipotenusa \n");
 	scanf("%f",& op);
 	
 	
    if(op == 1){ 
	   	hipotenusa = sqrt( catetetoUno * catetetoUno + catetoDos * catetoDos);
    	printf("La hipotenusa es de %f \n", hipotenusa);
    	printf("Los catetos son %f y %f \n", catetetoUno, catetoDos);
		} else{
			hipotenusa = catetoMaxIngresado;
        	catetoIncognita = sqrt(hipotenusa*hipotenusa - catetoMinIngresado * catetoMinIngresado);
        	printf("La hipotenusa es de %f \n", hipotenusa);
        	printf("Los catetos son %f y %f \n",catetoMinIngresado, catetoIncognita );
			}
			
    return 0;
}