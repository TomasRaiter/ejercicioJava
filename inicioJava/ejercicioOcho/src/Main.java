import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    boolean adivino = true;
    int numero = (int)(Math.random() * 100) + 1,adivinanza, trys = 0; //declaro el numero, como quiero que sea entero lo convierto a int, multiplico el math random *100 para que sea un numero entre 0 y 100, y le sumo 1 para que sea entre 1 y 100
    do{
        trys++;
        adivino = false;
        System.out.println("Ingrese un numero");
        adivinanza = sc.nextInt();
        sc.nextLine();

        if(numero == adivinanza)
            adivino = true;
         else if (numero > adivinanza)
            System.out.println("El número es mayor al que ingreso");
        else
            System.out.println("EL número es menor al que ingreso");
    }while(!adivino);

        System.out.println("Adivinaste en :" + trys + " intentos");

    }
}