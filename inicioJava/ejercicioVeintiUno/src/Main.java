import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    float comparar;
    int[] numeros;
        numeros = new int[10];
    int superiores = 0;
        for(int i = 0; i < 10; i++)
        numeros[i] = (i+1);

        System.out.println("Ingrese un numero para comparar");
        comparar = sc.nextFloat();
        sc.nextLine();

        for(int numero :numeros){
            if(numero > comparar)
                superiores++;
        }

        System.out.println("La cantidad de numeros almacenados que superan al numero que ingreso es de " + superiores);

    }
}