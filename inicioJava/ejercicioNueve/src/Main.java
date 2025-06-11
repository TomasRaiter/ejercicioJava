import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int numeros[], max = 0;
    numeros = new int[3];
        for(int i = 0; i < 3; i++){
            System.out.println("Ingrese un numero entero");
            numeros[i] = sc.nextInt();
            if(numeros[i] > max || i == 0)
                max = numeros[i];
        }
        System.out.println("EL numero mas grande de los ingresados es :" + max);

    }
}