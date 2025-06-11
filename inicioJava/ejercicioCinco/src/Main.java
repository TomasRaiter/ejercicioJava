import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        float numero;
        Scanner sc = new Scanner(System.in);
        System.out.println("Ingrese un numero del 1 al 10");
        numero = sc.nextFloat();
        sc.nextLine();

        System.out.println("Tabla de multiplicar de" + numero + ":");

        for(int i = 0; i < 11; i++){
            System.out.println(i * numero);
        }

    }
}