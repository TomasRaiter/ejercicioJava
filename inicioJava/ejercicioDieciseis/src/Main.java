import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float[] lados = new float[3];
        int coincidencias = 0;
        for(int i = 0; i < 3; i++){
        System.out.println("Ingrese el lado " + (i + 1) + " del triangulo");
            lados[i] = sc.nextFloat();
        }

        if(lados[0] == lados[1] && lados[1] == lados[2])
            System.out.println("El triangulo es equilatero");
        else if (lados[0] == lados[1] || lados[0] == lados[2] || lados[1] ==lados[2])
            System.out.println("El triangulo es isoceles");
        else
            System.out.println("El triangulo es escaleno");

    }
}