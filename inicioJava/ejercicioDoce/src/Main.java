import java.util.Scanner;
public class Main {
    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int numero = 0, auxiliar = 0, suma = 0, digito = 0;
        System.out.println("Ingrese un auxiliar");
        numero = sc.nextInt();
        auxiliar = numero;
        if(auxiliar < 0)
            auxiliar *= -1;

        while(auxiliar > 0){
            digito = auxiliar % 10;
            suma += digito;
            auxiliar /= 10;
        }

        System.out.println("La suma de los digitos del numero " + numero + " es de " + suma);


    }
}