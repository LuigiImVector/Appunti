#include <iostream>
using namespace std;

main ()
{
	
	int dimensione;
	
	cout<<"Inserisci una dimensione: ";
	cin>>dimensione;
	
	int &alias = dimensione;	//Alias
	
	int copia = dimensione;		//Semplice copia

	cout<<"Variabile 'dimensione': "<<dimensione<<endl;
	cout<<"Variabile 'alias': "<<alias<<endl;
	cout<<"Variabile 'copia': "<<copia<<endl;

	alias = 0;
	
	cout<<"--------"<<endl;

	cout<<"Variabile 'dimensione' dopo la modifica: "<<dimensione<<endl;
	cout<<"Variabile 'alias' dopo la modifica: "<<alias<<endl;
	cout<<"Variabile 'copia' dopo la modifica: "<<copia<<endl;

	
}


/*

Alias e reference.

Con l'istruzione 'int &alias = dimensione' non si sta copiando il valore di 'dimensione' dentro ad un'altra
variabile ma si sta copiando l'INDIRIZZO DI MEMORIA di 'dimensione' nell'alias.

In pratica è significa che 'dimensione' ed 'alias' stanno puntando allo stesso indirizzo di memoria e quindi
se avviene una modifica a quell'indirizzo di memoria il valore all'interno di entrambe le variabili viene modificato.


Con l'istruzione 'int temporaneo = dimensione' NON si sta passando l'indirizzo di memoria ma si sta semplicemente
copiando il contenuto, rendendo quindi indipendenti le due variabili.



Link:
https://www.youtube.com/watch?v=Ugw03WoRLwo&list=PL0qAPtx8YtJfZpJD7uFxAXglkiHSEhktG&index=75 (I primi minuti)

*/