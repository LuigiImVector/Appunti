/*
Appunti by Seby
*/

#include <iostream>
using namespace std;
main()

//Stringhe in array
{
	char array1[4]="CIAO";   //dal array1[0] ad array[3] sono le lettere di 'ciao', le altre due... non lo so
	cout<<array[3];  // mostrera' 'O'
	
	string array2[100]="CIAO"; //TUTTE le array da 0 a 99 avrano la stringa "CIAO"
	cout<<array[0];            // dara' in output "CIAO" utilizzando qualunque array da 0 a 99
	                           // se verra' utilizzato l' arrai[100] mandera' in crush il programma
}


//Continue
while(true)														
{
    cout<<"sono bellissimo";
	continue;				//una volta arrivato a 'continue' 
}						 //ripete il ciclo

//Break
while(true)
{               // L' operazione 'Break'
break;		   //  fa uscire l'utente dal ciclo     
}

//STRUTTURE 
{
  struct DataOggi{     //Le strutture sono Insieme di dati diversi in un unica variabile
  	unsigned int giorno, mese, anno;
  };

    DataOggi compleanno = {10,11,2003}; //per dare valori alle strutture bisgna dargli dei nomi, in questo caso "compleanno"
    cout<<compleanno.anno;
  
    cin>>compleanno.giorno; //Possiamo dare la possibilita' all utente di inserire i dati della struttura
    cin>>compleanno.mese;
    cin>>compleanno.anno;
    
    cout<<compleanno.giorno<<" "<< compleanno.mese<<" "<< compleanno.anno; //mostriamo la data salvata
    
    DataOggi amici[2] {
        {1,10,2003},            //E' possibile usare le array in combinazione alle strutture 
		{5,4,2002}
    };
}
			
//ENUMERAZIONI
{ 	int esempio=2;
	
	enum Acqua{        //  Le enumerazioni sono simili alle strutture ma i sottoinsiemi 
	Idrogeno=-3.5,	  //   non hanno bisogno di specifiate (int,float,etc.)*/
	Ossigeno=esempio
	};
	
	Idrogeno=3  //  in questo caso dara' errore perche C++ non converte il '3'(int) a Elemento(Acqua) 
	   		   //  perche' sono due "estensioni" diverse
	   		   
	cout<<Ossigeno;   /*per lavorare con un intervallo della enumerazione non si devono aggiungere '.' per usarli
						ma dobbiamo considerarli insieme di variabili semi-indipendenti tra loro*/ 
}

//TYPEDEF  
{
	typedef float unsigned giggino;  //  'typedef' assegna un soprannome ad un 'estensione' o un insieme di 'estesioni'
	giggino Numero;                  //  il nome che preferiamo  "typedef <estensioni> <soprannome>"
	cin>>Numero;
	cout<<Numero;
}


//Aggiunto da me

//POST INCREMENTO

array[contatore++] = 3;

//Questa cosa si chiama post incremento ed evita di scrivere una riga di codice:

array[contatore] = 3;
contatore++;

//Links: https://youtu.be/GZGB44oWLY8?list=PL0qAPtx8YtJfZpJD7uFxAXglkiHSEhktG&t=244