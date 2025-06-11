import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int[] numeros = new int[10];

    for(int i = 0; i < 10; i++){
        System.out.println("Ingrese el numero que desea para la posicion " + (i+1) + "del vector");
        numeros[i] = sc.nextInt();
        sc.nextLine();
    }

    for(int numero : numeros){ //por cada numero en numeros
        if(numero % 2 == 0) //chequeo si es par
            System.out.println("El numero " + numero +" es par"); //imprimo el numero junto a un mensaje
    }


    }
}