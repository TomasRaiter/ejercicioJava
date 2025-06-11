import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int op;
    float nroUno, nroDos, resultado;
    do{
        System.out.println("Ingrese que operacion desea realizar:");
        System.out.println("0) Salir \n1) Suma \n2) Resta \n3) Multiplicacion \n4) Dividir");
        op = sc.nextInt();
        switch (op) {
            case 0:
                System.out.println("Saliendo");
                break;
            case 1:
                System.out.println("Ingrese el primer numero");
                nroUno = sc.nextFloat();
                sc.nextLine();
                System.out.println("Ingrese el segundo numero");
                nroDos = sc.nextFloat();
                sc.nextLine();

                resultado = nroDos + nroUno;

                System.out.println("La suma da " + resultado);
                break;
            case 2:
                System.out.println("Ingrese el primero numero");
                nroUno = sc.nextFloat();
                sc.nextLine();
                System.out.println("Ingrese el numero que le quiere restar al primero");
                nroDos = sc.nextFloat();
                sc.nextLine();

                resultado = nroUno - nroDos;

                System.out.println("La resta da " + resultado);
                break;
            case 3:
                System.out.println("Ingrese el primero numero");
                nroUno = sc.nextFloat();
                sc.nextLine();

                System.out.println("Ingrese el numero que quiere multiplicar");
                nroDos = sc.nextFloat();
                sc.nextLine();

                resultado = nroDos * nroUno;

                System.out.println("La multiplicación da " + resultado);
                break;
            case 4:
                System.out.println("Ingrese el dividendo");
                nroUno = sc.nextFloat();
                sc.nextLine();

                System.out.println("Ingrese el divisor");
                nroDos = sc.nextFloat();
                sc.nextLine();

                resultado = nroUno / nroDos;

                System.out.println("La division da " + resultado);
                break;
            default:
                System.out.println("Opcion invalida");
                break;
        }

    }while(op != 0);


    }
}