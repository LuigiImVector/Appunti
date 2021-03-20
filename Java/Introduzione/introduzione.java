/* 
INT è un classe (nativa) e tutte le variabili create con questa tipologia avranno tutte le caratteristiche
tipiche di una classe INT.

INT è la classe mentre le variabili sono gli oggetti.

Su un INT possono essere applicate alcune operazioni (addizione, sottrazione, moltiplicazione e divisione) tipiche
della classe INT. Se creassimo una variabile di tipo diverso (CHAR o BOOL per esempio) non si potranno fare le
stesse operazioni (se sommi due CHAR concatena i valori).
*/


/*
Esempio con le struct in C++

//Classe
struct alunni {
	
	//Attributi
	string nome;
	int voto;
	
}

alunni al[] = {{"Zoccali", 10}, {"Ilaccoz", 01}}	//Oggetto

*/



/* Creazione classe */
public class NomeClasse {	//Il nome della classe inizia con una lettara maiuscola

	/* Attributi */
	/* ... */
	/* Metodi */

}

/* Creazione oggetto */
NomeClasse nomeOggetto = new NomeClasse();	//Il nome dell'oggetto inizia con la lettera minuscola

//new = Un'istruzione va nella memoria e riserva uno spazio per questo oggetto (alloca tutto lo spazio necessario
//per TUTTI gli attributi della classe)