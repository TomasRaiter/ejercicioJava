/*
1) Se debe realizar un programa el cual se solicite la siguiente información al usuario    
Nombre, Apellido, Fecha de nacimiento, y DNI.  Y luego informe si puede o no votar  y los
datos de Apellido, Nombre y DNI
Sabiendo que las elecciones son el 30 de septiembre, y pueden votar los mayores de 16 años
*/

int	dni, mes, anio, dia,anios;
char nombre[50], apellido[50];

#include <stdio.h>
int main(){

	printf("Ingrese su nombre \n");
	scanf("%s", nombre);
	
    printf("Ingrese su apellido \n");
	scanf("%s", apellido);
	
    printf("Ingrese su dni \n ");	 
	scanf("%d",& dni);
	
    printf("Ingrese dia de nacimiento \n");
	scanf("%d",& dia);
	
    printf("Ingrese mes de nacimiento \n");
	scanf("%d", & mes);
	
    printf("Ingrese anio de nacimiento \n ");
	scanf("%d", &anio);
	
    anios = 2025 - anio;

    if(mes > 9 || (mes == 9 && dia > 30)){
        anios--;
    }

    if(anios >= 16){
		printf("El usuario de nombre %s y apellido %s con DNI %d puede votar \n",nombre,apellido,dni);
    }else{
		printf("El usuario de nombre %s y apellido %s con dni %d no puede votar \n",nombre,apellido,dni);
    }
    return 0;
}
