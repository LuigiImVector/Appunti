import java.util.*;
//Alternativa più specifica: import java.util.Scanner;

public class ClasseMain {
    public static void main (String[] args)
    {
        Scanner input = new Scanner(System.in); //'input' è il nome dell'oggetto, puoi modificarlo in qualunque cosa tu voglia
												//System.in (rispettivamente classe e oggetto - in teoria) è il parametro che viene passato
												//Un po' come per l'output, la classe System mette permette: INput, OUTput ed ERRor.

        int numero;

        System.out.println("Inserisci un numero.");
        numero = input.nextInt();

        /*
            Per prendere in input un numero INTERO bisogna usare il metodo 'nextInt' ma se l'utente deve inserire in
            input un valore di tipo differente bisogna utilizzare un altro metodo.

            nextInt()   -   Leggi un valore di tipo intero
            nextLine()   -   Leggi un valore di tipo string
            nextFloat()   -   Leggi un valore di tipo float
            nextBoolean()   -   Leggi un valore di tipo booleano
            nextByte()   -   Leggi un byte
            nextDouble()   -   Leggi un valore di tipo double
            nextLong()   -   Leggi un valore di tipo long
            nextShort()   -   Leggi un valore di tipo short



            Per maggiori informazioni:
            https://www.w3schools.com/java/java_user_input.asp
            http://lgiambr.math.unipa.it/lezioniLP10_11/JavaLez8.pdf
        */

        System.out.println("Il numero inserito è: " + numero);


        input.close();  //Bisogna chiudere l'oggetto altrimenti esce questo errore: Resource leak: 'input' is never closed
    }
}
