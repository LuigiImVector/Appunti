# Metodi e attributi statici
Grazie alla "[[staticità]]" è possibile fare [[operazioni]] su [[metodi]] e [[attributi]] situati in un'altra [[classe]] senza avere l'obbligo di creare un [[oggetto]].


```java
public class MetodoStatic
{
	public static int numero=3;
	
	public static int modificaVisualizza(int valore)
	{
		numero = valore;
		return numero;
	}
}
```

```java
public class ClasseMain
{
	public static void main (String[] args)
	{	
		System.out.println(MetodoStatic.numero);
		
		MetodoStatic.numero = 19;
		System.out.println(MetodoStatic.numero);
		
		System.out.println(MetodoStatic.modificaVisualizza(5));
		
	}
}
```