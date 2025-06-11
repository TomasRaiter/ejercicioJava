import java.util.Scanner;
import java.util.Random; //libreria que permite realizar randoms de otra manera

public class Main {
    public static void main(String[] args) {
        String password = "";
        StringBuilder sb = new StringBuilder(); //creo un StringBuilder para ir agregando los caracteres de la contraseña, stringBuilder es modificable y permite agregar caracteres de manera eficiente
        int passwordLength, indice;
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        String caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; //genero un array de caracteres con todos los caracteres que entraran en la contrasela

        System.out.println("Ingrese la longitud que desea para su contraseña");
        passwordLength = sc.nextInt();
        sc.nextLine();

        for(int i  = 0; i < passwordLength; i++){
            indice = rand.nextInt(caracteres.length()); //genero un numero aleatorio entre 0 y la longitud del array de caracteres y lo selecciono como indice
            sb.append(caracteres.charAt(indice)); //agrego el caracter al StringBuilder
        }
            password = sb.toString(); //convierto el StringBuilder a String

        System.out.println("La password aleatoria es de " + password);
    }
}