public class Main {
    public static void main(String[] args) {
        int dadoUno, dadoDos, suma;
        dadoUno = (int)(Math.random() * 6) + 1;
        dadoDos = (int)(Math.random() * 6) + 1;
        suma = dadoDos + dadoUno;

        System.out.println("El dado uno salio " + dadoUno + ", el dado dos salio " + dadoDos + " y la suma salio " + suma);
    }
}