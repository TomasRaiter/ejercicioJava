import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int op;
        Scanner sc = new Scanner(System.in);
        float deposito,saldo = 1000;
        boolean repetir = false;
        do{
            System.out.println("Ingrese que operacion desea realizar");
            System.out.println("0) Salir \n1) Depositar dinero\n2) Retirar dinero \n3) Consultar saldo");
            op = sc.nextInt();
            sc.nextLine();
            switch (op){
                case 0:
                    System.out.println("Saliendo");
                    break;
                case 1:
                    System.out.println("Ingrese la cantidad de dinero que quiere depositar");
                    deposito = sc.nextFloat();
                    saldo += deposito;
                    break;
                case 2:
                    do{
                        repetir = false;
                        System.out.println("Ingrese la cantidad de dinero que quiere retirar");
                        deposito = sc.nextFloat();
                        if(deposito < saldo)
                            saldo -=  deposito;
                        else{
                            System.out.println("La cantidad que retire tiene que ser menor o igual que su saldo");
                            repetir = true;
                        }
                    }while(repetir);
                    break;
                case 3:
                    System.out.println("Su saldo es de :" + saldo);
                    break;
                default:
                    System.out.println("Opcion invalida");
                    break;
            }
        }while(op != 0);
    }
}