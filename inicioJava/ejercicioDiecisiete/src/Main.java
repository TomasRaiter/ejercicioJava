import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int contEspacios = 1;
        String frase = "";
        System.out.println("Ingrese una frase (sin espacios despues de la ultima palabra) ");
        frase = sc.nextLine();

        for(int i = 0; i < frase.length(); i++){
        if (frase.charAt(i) == ' ')
            contEspacios++;
        }

        System.out.println("La cantidad de palabras que tiene la frase es de " + contEspacios);

    }
}