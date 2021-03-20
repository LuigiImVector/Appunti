#include <iostream>
#include <string>
using namespace std;


//Si può anche non scrivere il typedef (soprattutto negli ultimi compilatori) però potrebbero
//sorgere dei problemi

typedef struct classeScolastica {
	string nome;
	string cognome;
	int voto;	
} classeScolastica;


void funzioneDiProva()
{
	
	classeScolastica alunniInformatica[4] = {
		{"Emilio", "Caridi", 5},
		{"Luigi", "Zoccali", 11},
		{"Seby", "Fotia", 11},
		{"Signor", "Petetes", 100}
	};
	
	int i=0;
	
	while (i<4)
	{
		cout<<alunniInformatica[i].nome<<" "<<alunniInformatica[i].cognome<<": "<<alunniInformatica[i].voto<<endl;
		i++;
	}
	
}


/*
Passare una struttura ad una funzione:

nomeStruttura variabile (non si può utilizzare in tutti i compilatori)

nomeStruttura* variabile

struct nomeStruttura* variabile


Se al posto di una variabile hai un array basta che aggiungi le parentesi quadre: []
*/


void passaggioStruct (classeScolastica alunniElettronica[])
{
	int i=0;
	
	while (i<9)
	{
		cout<<alunniElettronica[i].nome<<" "<<alunniElettronica[i].cognome<<": "<<alunniElettronica[i].voto<<endl;
		i++;
	}
}


main ()
{
	cout<<"Classe di Informatica"<<endl<<endl;
	
	funzioneDiProva();
	
	cout<<endl<<"---------------"<<endl<<endl;
	
	cout<<"Classe di Elettronica"<<endl<<endl;
	
	classeScolastica alunniElettronica[9] = {
		{"Giuseppe", "Albano", 10},
		{"Domenico", "Suraci", 100},
		{"Alessio", "Corrente", 9},
		{"Giuseppe", "Albano", 10},
		{"Giuseppe", "Albano", 10},
		{"Giuseppe", "Albano", 10},
		{"Giuseppe", "Albano", 10},
		{"Giuseppe", "Albano", 10},
		{"Giuseppe", "Albano", 10}
	};
	
	
	/*
	
		NON è necessario mandare a capo ogni volta, ho fatto così per una questione
		visiva, infatti così si capisce molto di più ed è più ordinato ma in caso potresti
		fare anche così:
		
		classeScolastica alunniElettonica[2] = {{"Giuseppe", "Albano", 10}, {"Domenico", "Suraci", 1000}};
	
	*/
	
	passaggioStruct(alunniElettronica);
	
}