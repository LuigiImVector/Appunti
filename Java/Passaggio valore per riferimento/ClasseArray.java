public class ClasseArray
{
	
	public void genera (ClasseMain array[])
	{
		int i=0;
		
		while (i<array.length)
		{
			/* array[i]=(int)(Math.random()*6+1); */
			array[i]=1;
			i++;
		}
	}
	
	public void visualizza(ClasseMain array[])
	{
		int i=0;
		
		while (i<array.length)
		{
			System.out.print(array[i]);
			i++;
		}
	}
	
}