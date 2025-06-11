import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String frase;
        int contadorVocales = 0, contadorConsonantes = 0;
        System.out.println("Ingrese una frase");
        frase = sc.nextLine().toLowerCase(); //paso el string a minuscula

        for(int i  =  frase.length() - 1; i >= 0; i--){
            char caracter = frase.charAt(i);

            if(caracter == ' ') //verifica si es un espacio y si es un espacio lo ignora con continue
                continue;
            if(esVocal(caracter)){
                contadorVocales++;
            }else
                contadorConsonantes++;
        }
        System.out.println("El numero de vocales de la cadena es de " + contadorVocales + " y el de consonates es de " + contadorConsonantes);
    }

    static boolean esVocal(char caracter){
        if(caracter == 'a' || caracter == 'e'|| caracter == 'i'|| caracter == 'o'|| caracter == 'u' || caracter == 'á'|| caracter == 'é'|| caracter == 'ó'|| caracter == 'í'|| caracter == 'ú')
        return true;
        return false;
    }
}