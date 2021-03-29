document.getElementById("checkbox").onclick = function ()
{
	
/* 
	Commenta questo blocco di istruzioni per testare il funzionamento del localStorage.
	
	Funzione simile al SESSION in PHP; se tu crei un certo valore resta salvato anche se chiudi pagina o simili.
*/
	if(document.getElementById("checkbox").checked == true)
	{
		localStorage.setItem("darkMode", "on");
		console.log('Scuro');
		
		document.querySelectorAll(".switching").forEach(function (item, index) {
			item.classList.add("darkMode");
		});
	} else {
		localStorage.setItem("darkMode", "off");
		console.log('Chiaro');
		
		document.querySelectorAll(".switching").forEach(function (item, index) {
			item.classList.remove("darkMode");
		});
	}

}

window.onload = function ()
{
	if(localStorage.getItem("darkMode") == "on")
	{		
		console.log("Ancora scuro");
		//Non serve nessun classList.add in quanto la classe darkMode è messa ovunque di default
	} else if (localStorage.getItem("darkMode") == "off")
	{
		console.log("Ancora chiaro");
		
		//Mette in un array tutti gli elementi che hanno come classe "darkMode" e fa
		//un ciclo (forEech) e gli caccia (o aggiunge) la classe "darkMode"
		//
		//Attenzione!
		//Agli elementi a cui va aggiunta/rimossa la classe deve essere inserita una classe di "default"
		//ovvero una classe fissa che servirà al querySelectorAll di selezionare gli elementi desiderati
		document.querySelectorAll(".switching").forEach(function (item, index) {
			item.classList.remove("darkMode");
		});
	}
}