import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numero, sumPares = 0, sumImpares = 0;
        System.out.println("Ingrese un numero positivo entero");
        numero = sc.nextInt();
        sc.nextLine();

        for(int i =  2; i <= numero; i+=2){
            sumPares += i;
        }

        for(int i = 1; i <= numero; i += 2){
            sumImpares += i;
        }
        System.out.println("Suma de pares de 1 a " + numero + ": " + sumPares);
        System.out.println("Suma de impares de 1 a " + numero + ": " + sumImpares);
    }
}