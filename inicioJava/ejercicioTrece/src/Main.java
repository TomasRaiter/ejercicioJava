import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int op;
        float temperatura, conversion;

        System.out.println("Desea convertir una temperatura de celcius  a farenheit (1) o viceversa (2)");
        op = sc.nextInt();
        sc.nextLine();

        System.out.println("Ingrese la temperatura que desea convertir");
        temperatura = sc.nextFloat();
        sc.nextLine();

        if(op == 1)
            conversion = (temperatura * 9 / 5) + 32;
        else
            conversion = (temperatura - 32) * (5.0f / 9.0f);

        System.out.println("La conversion solicitada da " + conversion);

    }
}