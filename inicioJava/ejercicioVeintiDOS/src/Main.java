import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        double[] notas  = new double[5];
        double total = 0, promedio;
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < notas.length; i++){
        System.out.println("Ingrese la nota numero " + (i+1));
        notas[i] = sc.nextInt();
        sc.nextLine();
        }

        for(double nota : notas)
            total += nota;

        promedio = total / notas.length;

        System.out.println("El promedio de las notas es de " + promedio);

    }
}