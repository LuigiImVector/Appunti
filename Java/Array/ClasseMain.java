public class ClasseMain {
    public static void main (String[] args)
    {
        int confronto=3, i=0;

        Dado dado = new Dado();
        Contatore test = new Contatore();
		
		System.out.println("Posizione 3 prima: " + test.getCont(confronto));
		
        while (i<100)
        {
            if(dado.lancia() == confronto)
            {
                //test.incremento(confronto);
				test.cont[confronto-1]++;	//Essendo un attributo pubblico può essere modificato liberamente
            }

            i++;
        }

        System.out.println("Il numero " + confronto + " e' uscito " + test.getCont(confronto) + " volte");

    }
}
