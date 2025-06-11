import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cantidad, a = 0, b = 1, siguiente;
        System.out.println("Ingrese que cantidad de numeros de la secuencia de Fibonacci quiere");
        cantidad = sc.nextInt();
        sc.nextLine();


        System.out.println("Los primeros " + cantidad + "numeros de la secuencia de Fibonacci son: ");
        for(int i = 0; i < cantidad; i++){
            System.out.print(a + ", ");
            siguiente = a + b;
            a = b;
            b = siguiente;
        }

    }
}