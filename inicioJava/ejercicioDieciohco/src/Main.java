import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cantidad;
        System.out.println("Ingrese  un numero entero positivo");
        cantidad = sc.nextInt();
        sc.nextLine();

        for(int i = 0; i < cantidad; i++){
            System.out.println("");//uso println para que salte de linea haciendo que sea una nueva fila
            for(int j = 0; j <= i; j++)
            System.out.print("*");//uso print normal para que no salte de linea
        }
    }

}