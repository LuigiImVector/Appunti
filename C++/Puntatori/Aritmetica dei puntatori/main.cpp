//Attenzione! L'aritmetica dei puntatori funziona solo se si hanno blocchi CONTINUI di byte

#include <iostream>
using namespace std;

main ()
{
	int v[6] = {100,-80,36,612};
	
	cout<<"---Stampa indirizzi---"<<endl;
	cout<<v<<endl;
	cout<<&v[0]<<endl;	//Stampa l'indirizzo della prima "casella"
	//Hanno lo stesso indirizzo
	
	int *pInt = v;
	cout<<pInt<<endl;
	
	cout<<"---Test stampa in modi alternativi---"<<endl;
	cout<<pInt[2]<<endl;
	cout<<*(v+2)<<endl;
	cout<<*(pInt+1)<<endl;
	
	/*
		Essendo che la posizione 0 dell'array ha lo stesso indirizzo dell'array vuol dire che incrementando
		(in questo caso) di 1 l'indirizzo ci si ritroverà alla posizione successiva.
	*/
	
	cout<<"---Aritmetica dei puntatori---"<<endl;
	pInt = pInt + 1;
	pInt+=1;
	pInt++;
	cout<<*pInt<<endl;
	
	pInt--;
	cout<<*pInt<<endl;
	
	//pInt = 0;	Non si può fare
	
	pInt-=2;
	
	//Metodo veloce e alternativo per stampare un array
	
	cout<<"---Stampa alternativa di un array---"<<endl;
	for(int i=0; i<6; i++, pInt++)
		cout<<*pInt<<" ";

/*
Link: https://www.youtube.com/watch?v=4Zf_umSMQPA&list=PL0qAPtx8YtJfZpJD7uFxAXglkiHSEhktG&index=81
*/

}