import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] palabras = {"Arma", "master", "argentina", "renga", "nombre"};
        String buscar = "";
        boolean esta = false;

        System.out.println("Ingrese la palabra a buscar");
        buscar = sc.nextLine();

        for(String palabra : palabras){
            if(palabra == buscar){
                esta = true;
            }
        }

        if(esta)
            System.out.println("La cadena ingresada esta en el grupo almacenado");
        else
            System.out.println("La cadena ingresada no esta en el grupo almacenado");




    }
}