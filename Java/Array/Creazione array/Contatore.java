public class Contatore {
    public int[] cont = new int[6];
	
	/*
		Public int[] cont: serve per creare l'array, se vuoi subito inserire dei valori basta che metti ' = {valore, valore, valore...}' altrimenti devi inizializzare l'array
							inserendo una dimensione con 'new int[dimensione]' (se si tratta di un array di int).
	*/

    public void incremento(int valore)
    {
        cont[valore-1]++;
    }

    public int getCont(int valore)
    {
        return cont[valore-1];
    }
}
