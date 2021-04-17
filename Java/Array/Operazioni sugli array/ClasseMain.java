import java.util.Arrays;
import java.util.Scanner;
//Con "import java.util.*;" include tutte le librerie di java.util ma per evitare problemi di prestazioni CREDO sia meglio inserirle una alla volta (se sono troppe vabbè, si usa l'asterisco, non credo cambi più di tanto)

public class ClasseMain
{
	public static void main (String[] args)
	{
		int array1[] = {0,1,3,351,45,5,726,7,38,96};	/* Size: 10 */
		int array2[] = new int[8];
		
		System.out.println("Array 1");
		ClasseArray.visualizzaArray(array1);
		System.out.println("\n\nArray 2");
		ClasseArray.visualizzaArray(array2);
		
		//Array copy
		System.arraycopy(array1, 0, array2, 0, array2.length);	/* array sorgente s, indice di partenza s, array di destinazione d, indice di partenza d, numeri da copiare */
		
		System.out.println("\n\nArray 2");
		ClasseArray.visualizzaArray(array2);
		
		//Arrays sort
		Arrays.sort(array1);
		System.out.println("\n\nArray 1 dopo l'ordinamento");
		ClasseArray.visualizzaArray(array1);
		
		
		int array3[] = new int[20];
		System.out.println("\n\nArray 3");
		ClasseArray.visualizzaArray(array3);
		
		//Arrays fill
		Arrays.fill(array3, 5);
		System.out.println("\n\nArray 3 dopo il riempimento");
		ClasseArray.visualizzaArray(array3);
		
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("\n\nInserisci un numero da cercare all'interno dell'array 1");
		int numeroDaCercare = input.nextInt();
		
		//Binary search
		//Se trova il numero restituisce la posizione
		//Se NON trova il numero restituisce un numero negativo
		//
		//È consigliato ordinare l'array prima di usare questo metodo 
		System.out.println(Arrays.binarySearch(array1, numeroDaCercare));
		
		
		
		
	}
}