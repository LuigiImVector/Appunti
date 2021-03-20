var somma = 0;
var numbers = [4, 1, 3, 2];

numbers.forEach(function (item, index) {
	somma+=item;
	console.log(somma);
	
	console.log("-----------");
	
	console.log(index);
});


/* Output:

4 (Primo numero array + 0)
--
0 (index: il contatore)

5 (numbers[1]+somma)
--
1

8
--
2

10 (4+1+3+2)
--
3	(Il ciclo è stato ripetuto 4 volte e infatti l'array è grande 4 elementi)

*/




/*

forEach in JavaScript
-------

array.forEach(function(currentValue, index, arr), thisValue)


currentValue: deve essere inserito per forza || elemento corrente in elaborazione
index: facoltativo || indice o contatore
arr: facoltativo // array a cui viene applicato forEach()

thisValue: facoltativo || valore da utilizzare come this quando si esegue callback || se vuoto è 'undefined'



Links utili
---

https://www.w3schools.com/jsref/jsref_foreach.asp
https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/forEach
https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Operators/this






*/