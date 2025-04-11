/*
8. Realizar un programa que ingrese 5 palabras y devuelta la cadena de
caracteres repetidos más larga entre ellas (si ingreso metro, metralleta Y
metido debe devolver la cadena “met”)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char str[30], str1[30], str2[30], str3[30], str4[30], sub[30], mayor[30] , aparecioMayorUno[30], aparecioMayorDos[30], aparecioMayorTres[30], aparecioMayorCuatro[30], aparecioMayorCinco[30];
int longitud, i, j, k, max = 0 , aparecio = 0, aparecioMayor, listaMayores[5], aPU, aPD, aPT, aPCu, aPCi;
bool empate = false;

void ingresar();
void ordenar();
void compararUno();
void compararDos();
void compararTres();
void compararCuatro();
void compararCinco();

main(){

    ingresar();
    compararUno();
    compararDos();
    compararTres();
    compararCuatro();
    compararCinco();
    ordenar();
    
    if(empate) 
        printf("\n\nNo hay subcadena repetida\n");
    else{
        printf("\n\nLa subcadena mas larga repetida es: %s\n", mayor);
    }
    return 0;
}

void ingresar() {
    
    printf("Ingrese la primer palabra: ");
    fgets(str, sizeof(str), stdin);
    str[strscpn(str, "\n")] = '\0';

    printf("Ingrese la segunda palabra: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Ingrese la tercer palabra: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Ingrese la cuarta palabra: ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcpn(str3, "\n")] = '\0';

    printf("Ingrese la quinta palabra: ");
    fgets(str4, sizeof(str4), stdin);
    str4[strcpn(str4, "\n")] =  '\0';
}

void compararUno() {

    int maxLocal = 0;
    longitud = strlen(str);

    for(i = 0; i < longitud; i++) {
        
        k = 0;
        aparecio = 0;
        
        for(j = i; j < longitud; j++) {

            sub[k] = str[j];
            k++;
            sub[k] = '\0';

            if(strstr(str1, sub) != NULL) 
                aparecio ++;
            if(strstr(str2, sub) != NULL)
                aparecio ++;
            if(strstr(str3, sub) != NULL)
                aparecio ++;
            if(strstr(str4, sub) != NULL)
                aparecio ++;
               
            if(strlen(sub) > maxLocal && aparecio > aparecioMayor){
                maxLocal = strlen(sub);
                strcpy(aparecioMayorUno, sub);
                mayor[strcspn(aparecioMayorUno, "\n")] = '\0'; 
                aparecioMayor = aparecio;
            }          
         }


    }

    aPU = aparecioMayor;
    aparecioMayor = 0;
}

void compararDos() {

    int maxLocal = 0;
    longitud = strlen(str1);

    for(i = 0; i < longitud; i++) {

        k = 0;
        aparecio = 0;

        for(j = i; j < longitud; j++) {

            sub[k] = str1[j];
            k++;
            sub[k] = '\0';

            if(strstr(str, sub) != NULL) 
                aparecio ++;
            if(strstr(str2, sub) != NULL)
                aparecio ++;
            if(strstr(str3, sub) != NULL)
                aparecio ++;
            if(strstr(str4, sub) != NULL)
                aparecio ++;
               
            if(strlen(sub) > maxLocal && aparecio > aparecioMayor){
                maxLocal = strlen(sub);
                strcpy(aparecioMayorDos, sub);
                mayor[strcspn(aparecioMayorDos, "\n")] = '\0'; 
                aparecioMayor = aparecio;
            }          
         }
    }

    aPD = aparecioMayor;
    aparecioMayor = 0;

}

void compararTres() {
    
    int maxLocal = 0;
    longitud = strlen(str2);

    for(i = 0; i < longitud; i++) {

        k = 0;
        aparecio = 0;

        for(j = 0; j < longitud; j++) {

            sub[k] = str2[j];
            k++;
            sub[k] = '\0';

            if(strstr(str, sub) != NULL) 
                aparecio ++;
            if(strstr(str1, sub) != NULL)
                aparecio ++;
            if(strstr(str3, sub) != NULL)
                aparecio ++;
            if(strstr(str4, sub) != NULL)
                aparecio ++;
               
            if(strlen(sub) > maxLocal && aparecio > aparecioMayor){
                maxLocal = strlen(sub);
                strcpy(aparecioMayorTres, sub);
                mayor[strcspn(aparecioMayorTres, "\n")] = '\0'; 
                aparecioMayor = aparecio;
            }          
         }
        }

        aPT = aparecioMayor;
        aparecioMayor = 0;
    
}

void compararCuatro() {

    int maxLocal = 0;
    longitud = strlen(str3);

    for(i = 0; i < longitud; i++) {

        k = 0;
        aparecio = 0;

        for(j = 0; j < longitud; j++) {

            sub[k] = str3[j];
            k++;
            sub[k] = '\0';

            if(strstr(str, sub) != NULL) 
                aparecio ++;
            if(strstr(str1, sub) != NULL)
                aparecio ++;
            if(strstr(str2, sub) != NULL)
                aparecio ++;
            if(strstr(str4, sub) != NULL)
                aparecio ++;
               
            if(strlen(sub) > maxLocal && aparecio > aparecioMayor){
                maxLocal = strlen(sub);
                strcpy(aparecioMayorCuatro, sub);
                mayor[strcspn(aparecioMayorCuatro, "\n")] = '\0'; 
                aparecioMayor = aparecio;
            }          
         }
        }

        aPCu = aparecioMayor;
        aparecioMayor = 0;
}

void compararCinco() {

    int maxLocal = 0;
    longitud = strlen(str4);
    
    for(i = 0;i < longitud; i++) {

        k = 0;
        aparecio = 0;

        for(j = 0; j < longitud; j++) {

            sub[k] = str4[j];
            k++;
            sub[k] = '\0';

            if(strstr(str, sub) != NULL) 
                aparecio ++;
            if(strstr(str1, sub) != NULL)
                aparecio ++;
            if(strstr(str2, sub) != NULL)
                aparecio ++;
            if(strstr(str3, sub) != NULL)
                aparecio ++;
               
            if(strlen(sub) > maxLocal && aparecio > aparecioMayor){
                maxLocal = strlen(sub);
                strcpy(aparecioMayorCinco, sub);
                mayor[strcspn(aparecioMayorCinco, "\n")] = '\0'; 
                aparecioMayor = aparecio;
            }          
         }
        }
        aPCi = aparecioMayor;
        aparecioMayor = 0;
}

void ordenar() {

    if(aPU > aPD && aPU > aPT && aPU > aPCu && aPU > aPCi) 
        strcpy(mayor, aparecioMayorUno);
    else if(aPD > aPU && aPD > aPT && aPD > aPCu && aPD > aPCi) 
        strcpy(mayor, aparecioMayorDos);
    else if(aPT > aPU && aPT > aPD && aPT > aPCu && aPT > aPCi) 
        strcpy(mayor, aparecioMayorTres);
    else if(aPCu > aPU && aPCu > aPD && aPCu > aPT && aPCu > aPCi) 
        strcpy(mayor, aparecioMayorCuatro);
    else if(aPCi > aPU && aPCi > aPD && aPCi > aPT && aPCi > aPCu) 
        strcpy(mayor, aparecioMayorCinco);
    else if(aPU == aPD && aPU == aPT && aPU == aPCu && aPU == aPCi) 
        if(strlen (aparecioMayorUno) > strlen(aparecioMayorDos) && strlen(aparecioMayorUno) > strlen(aparecioMayorTres) && strlen(aparecioMayorUno) > strlen(aparecioMayorCuatro) && strlen(aparecioMayorUno) > strlen(aparecioMayorCinco)) 
            strcpy(mayor, aparecioMayorUno);
    else if(strlen(aparecioMayorDos) > strlen(aparecioMayorUno) && strlen(aparecioMayorDos) > strlen(aparecioMayorTres) && strlen(aparecioMayorDos) > strlen(aparecioMayorCuatro) && strlen(aparecioMayorDos) > strlen(aparecioMayorCinco)) 
            strcpy(mayor, aparecioMayorDos);
    else if(strlen(aparecioMayorTres) > strlen(aparecioMayorUno) && strlen(aparecioMayorTres) > strlen(aparecioMayorDos) && strlen(aparecioMayorTres) > strlen(aparecioMayorCuatro) && strlen(aparecioMayorTres) > strlen(aparecioMayorCinco)) 
            strcpy(mayor, aparecioMayorTres);
    else if(strlen(aparecioMayorCuatro) > strlen(aparecioMayorUno) && strlen(aparecioMayorCuatro) > strlen(aparecioMayorDos) && strlen(aparecioMayorCuatro) > strlen(aparecioMayorTres) && strlen(aparecioMayorCuatro) > strlen(aparecioMayorCinco)) 
            strcpy(mayor, aparecioMayorCuatro);
    else if(strlen (aparecioMayorCinco) > strlen (aparecioMayorUno) && strlen (aparecioMayorCinco) > strlen (aparecioMayorDos) && strlen (aparecioMayorCinco) > strlen (aparecioMayorTres) && strlen (aparecioMayorCinco) > strlen (aparecioMayorCuatro)) 
            strcpy(mayor, aparecioMayorCinco);
    else {
        empate = true;
    }
}