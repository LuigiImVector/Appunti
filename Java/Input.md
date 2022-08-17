# Ricevere un valore in input

Per fare ciò bisogna includere la [[classe]] [[Scanner]]:
```java
import java.util.Scanner;
```
È necessario poi istanziare un [[oggetto]] utilizzando un [[costruttore parametrizzato]] a cui verrà passato il parametro `System.in`.
```java
Scanner objectName = new Scanner(System.in);
```
`System.in` (rispettivamente classe e oggetto) fa parte della classe [[System]] (non può essere istanziata) tramite la quale si ha accesso ad un buffer con informazioni in byte da convertire. Questa classe comprende cose come: *standard **in**put*, *standard **out**put* ed ***err**or output streams*.

Una volta fatto ciò basterà invocare il metodo desiderato.

Metodo | Scopo
------ |------
nextInt() | Valore intero
nextFloat() | Valore float
nextLine() | Valore string
nextBoolean() | Valore booleano
nextByte() | Un byte
nextDouble() | Valore double
nextLong() | Valore long
nextShort() | Valore short
hasNextInt() | Verifica se la prossima<br /> sequenza di caratteri può<br /> essere interpretata come intero.<br />Restituisce valore booleano.
hasNextDouble() | Verifica se la prossima<br /> sequenza di caratteri può<br /> essere interpretata come double.<br />Restituisce valore booleano.
hasNextLine() | Verifica se in input è disponibile<br /> un'ulteriore linea.<br />Restituisce valore booleano.
hasNext() | Verifica se in input è disponibile<br /> un'ulteriore sequenza<br /> essere interpretata come intero.<br />Restituisce valore booleano.

---
#### Issue
Quando si utilizza un `nextLine()` dopo un `nextFoo()` il programma salterà il nextLine() passando alla prossima istruzione; il motivo è che il `nextFoo()` non leggerà il *newline character* creato alla premuta del tasto "Enter" e quindi verrà letto automaticamente dal `nextLine()`. Per risolvere basta inserire un altro nextLine() il cui [[input]] non verrà salvato da nessuna parte.

```java
int option = objectName.nextInt();
input.nextLine();
String str = input.nextLine();
```

---
### Esempio

Questo [[ciclo]] si fermerà solamente quando l'utente NON inserirà un numero (inserendo quindi una lettera o altro).

```java
int somma=0;
while (input.hasNextInt())
{
	numero=input.nextInt();
	somma+=numero;
}
System.out.println("La somma e' " + somma);
input.close();
```

L'ultima [[istruzione]] è necessaria per evitare questo errore: `Resource leak: 'input' is never closed`.

---
#### Risorse
https://www.w3schools.com/java/java_user_input.asp
http://lgiambr.math.unipa.it/lezioniLP10_11/JavaLez8.pdf
Appunti [[professore Clemente Russo]]