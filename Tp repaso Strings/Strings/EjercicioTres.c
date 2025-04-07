/*
3. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda).
*/
#include <stdio.h>
#include <string.h>	
int main(){
char letra, palabras[150],newPal[150];
int contVocales = 0 , posFn ;


printf("Ingrese cadema de caracteres la cual desee saber si es palindroma ");
fgets(palabras, sizeof(palabras), stdin); 
palabras[strcspn(palabras, "\n")] = '\0';

posFn = strlen(palabras);

for(int i = 0; i < posFn;i++){
	letra = palabras[posFn - i - 1]; 
	newPal[i] = letra;
}

newPal[posFn] = '\0'; 
 
 if(strcmp(palabras, newPal) == 0){
  printf("La palabra %s es palindroma \n",palabras);
 }else{
	printf("La palabra %s no es palindroma \n",palabras);
	}
	return 0;
}
