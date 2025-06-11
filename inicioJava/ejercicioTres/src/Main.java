import java.util.Scanner;// importo de la libreria utiles el scanner

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);//declaro el Scanner con nombre scanner
        boolean terminar = false;
        int ingreso;

        while(!terminar){
            System.out.println("Ingrese un número, primo y mayor a 100 si desea terminar");
            ingreso = scanner.nextInt();//leo la entrada de numero
            scanner.nextLine();//limpio el buffer
            if(ingreso > 100 && esPrimo(ingreso)){
            terminar = true;}
        }
    }

    public static boolean esPrimo(int numero){
        int cantDivisores = 0;

        if(numero % 2 == 0){
            return false;
        }else{
            for(int i = 3; i < Math.sqrt(numero); i++) {
                if(numero % i == 0)
                    cantDivisores++;
            }
        }
        if(cantDivisores > 1) {
            return false;
        }else{
            return true;
        }
    }

}