public class ClasseMain
{
	public static void main (String[] args)
	{
		//Metodi e attributi statici possono essere invocati/visualizzati/modificati senza l'obbligo di
		//creare l'oggetto ma basta scrivere il nome della classe e poi il metodo/l'attributo.
		//
		//NomeClasse.attributo;
		//NomeClasse.metodo();
		
		System.out.println("Stampa attributo statico: " + MetodoStatic.numero);
		
		MetodoStatic.numero = 19;
		System.out.println("Stampa attributo statico dopo la modifica: " + MetodoStatic.numero);
		
		System.out.println("Funzione statica invocata: " + MetodoStatic.modificaVisualizza(5));
		
	}
}