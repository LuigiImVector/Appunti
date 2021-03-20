//Questo programma permette di espandere la dimensione di un array puntatore.

#include <iostream>
using namespace std;

main ()
{
	cout<<"---Array Iniziale---"<<endl;
	
	int* pInt = new int[100];
	
	for (int i=0; i<100; i++)
		pInt[i]=i;
	
	for (int i=0; i<100; i++)
		cout<<pInt[i]<<endl;
	
	cout<<"---Array temporaneo---"<<endl;
	
	int* temp = new int[200];
	
	for (int i=0; i<100; i++)
		temp[i]=pInt[i];
	
	for (int i=100; i<200; i++)
		temp[i]=i;
	
	for (int i=0; i<200; i++)
		cout<<temp[i]<<endl;
	
	delete[] pInt;
	
	cout<<"---Array espanso---"<<endl;
	
	//Con questa istruzione li faccio puntare entrambi allo stesso blocco.
	//Stai puntando ad uno stesso blocco e quindi NON stai creando un alias, questo vuol dire
	//che puoi cambiare quando vuoi "temp" (nella riga 42 c'è faccio un test che lo dimostra).
	pInt = temp;
	
	for (int i=0; i<200; i++)
		cout<<pInt[i]<<endl;
	
	
	cout<<"---Verifica di non alias---"<<endl;
	
	delete[] temp;
	for (int i=0; i<200; i++)
		cout<<pInt[i]<<endl;


/*

Equivalenti in C di new e delete.

new = malloc (memory allocation)

delete = free

NON ESISTE = realloc (reallocation)


Attenzione! Le varianti in C sono più vecchie e più pericolose quindi NON vanno preferite rispetto a quelle di C++.

Unica eccezione viene fatta per 'realloc' che è un minimo interessante anche se nella stdlib ci sono funzioni
che permettono di fare ciò in modo più sicuro.


Perché preferire le varianti in C++?

I nuovi comandi sono più completi ed evitano numerosi problemi, sono più aperte e fanno molte cose automaticamente (per
esempio le struct vengono gestite bene dal new e delete).

Un altro problema sono i messaggi di errore vecchi e che possono causare problemi; infatti se non si riesce
ad allocare qualcosa verrà restituito un valore NULL e viene considerato come un int di valore 0 e questo potrebbe
causare confusione in fase di compilazione (metti che ci sono altri valori 0).



Per approfondire: https://youtu.be/haTxzc05D3w?list=PL0qAPtx8YtJfZpJD7uFxAXglkiHSEhktG&t=216



*/
	
}