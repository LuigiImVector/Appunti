#include <iostream>
using namespace std;

main ()
{
	//Char pointer
	char* nomePuntatore = nullptr;	//Nullpointer: Nessun valore da assegnae
	
	int dimensione;
	cout<<"Inserisci dimensione: ";
	cin>>dimensione;
	
	nomePuntatore = new char[dimensione];
	
	/*
	
		ATTENZIONE!
		I puntatori sono molto pericolosi quando si lavora con dimensioni di blocchi molto elevati, infatti
		per quando facciamo una 'new' il sistema operativo dovrà trovare un blocco CONTIGUO di byte richiesti
		nella RAM.
		Ci sono dei metodi (linked list) con i quali è possibile evitare di dover trovare un blocco contiguo
		di byte.
	
	*/
	
	nomePuntatore[dimensione-3] = 'a';	//Stesse meccaniche degli array (in quanto ho creato effettivamente un array)
	
	cout<<"Valore della posizione "<<dimensione-3<<": "<<nomePuntatore[dimensione-3]<<endl;
	
	//Libera la RAM allocata precedentemente (disallocare)
	delete[] nomePuntatore;	//Si usano le graffe [] in quanto punta un blocco di char (array)
}


/* 
I puntatori.

I puntatori permettono di lavorare a basso livello hardware con la RAM.

I puntatori permettono di creare (anche) array di cui non si sa la dimensione in fase di scrittura del
codice e della sua compilazione.


Negli compilatori più moderni è possibile dichiarare un array con una dimensione non costante ma normalmente NON
si può fare:
	int n;
	cin>>n;
	
	int array[n];	//NON si può fare


Esempio:

Se in un programma devi aprire un'immagine ma non sai quant'è grande questa immagine non puoi a prescindere
creare un array grande 2Gb per contrastare la peggiore ipotesi ma al momento dell'esecuzione del programma (runtime)
controlli quanto è grande l'immagine e richiedi alla RAM un blocco preciso di byte che ti servono per poter aprire
quell'immagine.


*/