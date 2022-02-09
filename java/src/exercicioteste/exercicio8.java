package exercicioteste;

import java.util.Scanner;

public class exercicio8 {
	
	public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        

        System.out.print( "Digite o valor de X: " );

        int num = entrada.nextInt();
        for (int i = 1; i <= num; i = i + 2) {
            System.out.println(i);
        }
    }

}