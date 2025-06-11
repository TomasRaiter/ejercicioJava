import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numero = 0, factorial = 1;
        System.out.println("Ingrese un numero entero positivo");
        numero = sc.nextInt();
        sc.nextLine();

        for(int i = 0; i <= numero - i; i++){
        factorial *= numero;
        }

        System.out.println("El factorial de " + numero + " es de: " + factorial);

    }
}