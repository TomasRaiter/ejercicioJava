public class Main { //Declaracion de la clase publica Main
    public static void main(String[] args) { //declaro la funcion main como publica estatica y sin retorno y ademas dejo que se le pase cualquier argumento
        for(int i = 50; i <= 100; i++){ //realizo un for que recorrera todos los numeros desde el 50 al 100 e imprimira primo si el numero es primo y los divisores si no lo es
        if(esPrimo(i)){//llamo a la funcion booleana esPrimo que devolvera true si el numero es primo y false si no lo es y evaluo la respuesta para imprimir loque corresponda
            System.out.println("primo");//imprimo primo
        }else{
            System.out.println("Divisores: ");
            for(int j = 3; j < Math.sqrt(i); j++){
                if(i % j == 0)
            System.out.println(j);
            }
        }

        }
    }

    public static boolean esPrimo(int numero){//funcion que evalua si el numero es primo
        int cantDivisores = 0;

        if(numero % 2 == 0){//si el numero es par devuelve falso
            return false;
        }else{
            for(int i = 3; i < Math.sqrt(numero); i++) {//realizo un for que recorrera desde 3 hasta la raiz del numero que quiero evaluar si es primo
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