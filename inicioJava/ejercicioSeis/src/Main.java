import java. util.Scanner;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String palabra="", palabraInvertida = "";//declaro 2 strings vacios
        System.out.println("Ingrese una palabra");
        palabra = sc.nextLine();

        for(int i = palabra.length() - 1 ; i >= 0; i--){//palabra.length -1 toma la longitud de la palabra menos un caracter que es el espacio almacenado
            palabraInvertida += palabra.charAt(i); //charAt(i) selecciona el caracter de la posicion i
        }

        System.out.println("Palabra invertida" + palabraInvertida);

    }
}