import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int año;
        System.out.println("Ingresa un año");
        año = sc.nextInt();
        sc.nextLine();

        if(año % 4 == 0 && (año % 100 != 0 || año % 400 == 0))
            System.out.println("El año " + año + " es bisiesto");
        else
            System.out.println("El año " + año + " no es bisiesto");
    }
}