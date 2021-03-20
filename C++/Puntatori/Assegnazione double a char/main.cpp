#include <iostream>
using namespace std;

main ()
{
	char * pChar = new char[100];
	double* pDouble = new double[100];
	
	pChar = (char *)pDouble;	//32 bit di double in 32 bit di char
	//Questa è una forzatura "vecchio stile" per convertire due tipi (in questo caso sono puntatori).
}



/*

Si può fare anche con altre tipologie di variabili

Link:
https://www.youtube.com/watch?v=ksS_Y9lMrcU&list=PL0qAPtx8YtJfZpJD7uFxAXglkiHSEhktG&index=77

*/