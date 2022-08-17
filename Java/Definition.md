# Java introduction

**[[Java]]** è un [[linguaggio di programmazione]] [[orientato ad oggetti]] ([[OOP]]).

- Una **[[classe]]** viene creata dal [[programmatore]] e al suo interno contiene tutte quelle *informazioni e caratteristiche* che gli [[oggetti]] ([[istanze]]) copia della/basati sulla [[classe]] avranno; una classe è formata da [[elementi]] o [[membri]] ([[attributi]] e [[metodi]]).

  - Un **[[oggetto]]** è una copia ([[istanza]]) di una classe.

    - Le **istanze** (oggetti) sono richieste di nuovi dati che appartengono a quella classe.
  - I **[[metodi]]** ([[funzioni]]) sono le serie di proprietà e funzioni di una classe (operazioni che si possono fare con le [[variabili]]/attributi).
    - Gli **attributi** sono le variabili che costituiscono un oggetto e specificano le proprietà/caratteristiche che tutti gli oggetti di una classe devono possedere.

Il nome di una **classe** deve iniziare per **lettera maiuscola**.
Il nome di un **oggetto** deve iniziare per **lettera minuscola**.

---
#### Modificatori di accesso

I [[modificatori di accesso]] regolano la visibilità e l'accesso ad un componente Java (classe, metodo, attributo).

`private`: l'elemento è visibile solo all'interno della classe dagli altri membri.

`public`: l'elemento è visibile sia all'interno che all'esterno della classe.

`protected`: l'elemento può essere visualizzato solo da chi ha le "[[chiavi di accesso]]".

File utile: [[Java-UniPa.pdf]]

---

#### Il main

Il `main()` deve essere:
- `public` in modo da essere visibile in qualsiasi parte del codice;
- `static` in modo da invocare questo metodo senza dover creare un oggetto;
- `void` perché non restituisce nessun valore
- `(String[] args)` che rappresenta un array (vuoto) di parametri da passare al main.

```java
public static void main(String[] args)
```

---

#### Metodi costruttori

Il **[[costruttore]]** è il primo metodo di una classe che viene richiamato dopo l'[[allocazione]] di un oggetto in [[memoria]] e per [[invocarlo]] bisogna utilizzare il [[costrutto]] `new`.

Il costrutto `new` è un'istruzione che va nella memoria e riserva uno spazio per questo oggetto (alloca tutto lo spazio necessario per **tutti** gli attributi della classe).

In Java esiste il **[[costruttore di default]]** che non ha bisogno di essere dichiarato nel [[codice]] e si occupa di azzerare tutti gli attributi di quella classe.
Il **costruttore di default esiste solamente quando non è stato creato manualmente nessun altro costruttore**, in caso contrario il costruttore di default non esisterà e bisognerà crearlo manualmente.

Il costruttore deve necessariamente avere il nome della classe e ne esistono di due tipi:
- Il **[[costruttore implicito]]** che è privo di parametri (come quello di default);
- Il **[[costruttore parametrizzato]]** in cui bisogna passare dei parametri.

```java
public class Contatore {
	private int cont;
	public Contatore() {
		cont = 0;
	}
	
	public Contatore(int cont) {
		this.cont = cont;
	}
}
```

```java
Contatore c = new Contatore();
Contatore c = new Contatore(12);
```

❗ N.B. ❕

Java capirà automaticamente quale dei due [[costruttori]] scegliere in base all'assenza o meno di [[parametri]].

---

#### Classi native

`int` è una [[classe nativa]] e tutte le variabili create di questa tipologia avranno tutte le stesse caratteristiche tipiche di una classe [[int]].

`int` è una classe mentre le variabili sono gli oggetti.

Su un attributo di tipo `int` possono essere applicate alcune operazioni ([[addizione]], [[sottrazione]], [[moltiplicazione]] e [[divisione]]) tipiche della classe int.
Se dichiarassimo una variabile di tipo diverso (`char`, `bool`...) non si potrebbero fare le stesse operazioni (se sommi due `char` contatena i caratteri mentre se sommi due `int` li somma letteralmente).

---

#### Esempio con le Struct in C++

```cpp
//Classe
struct alunni {
	
	//Attributi
	string nome;
	int voto;
	
}

alunni al[] = {{"Zoccali", 10}, {"Ilaccoz", 01}}	//Oggetto
```