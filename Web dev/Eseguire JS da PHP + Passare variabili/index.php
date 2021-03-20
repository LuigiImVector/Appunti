//ESEGUIRE CODICE JAVASCRIPT DA PHP
//
//Crea un file JS esterno (oppure puoi scriverlo direttamente qua) e includilo prima del tag php.
//Una volta fatto ti basterà aprire un altro tag <script> e richiamare la funzione.


<script type="text/javascript" src="index.js"></script>

<?php

if(true)
{
    print("Fatto!\n");
    echo '<script>jsFromPHP();</script>';	//Scrive nella console 'Ciao'
} else {
    print("Errore!.\n");
}


?>





//PASSARE UNA VARIABILE DA PHP A JAVASCRIPT
//
//Quando richiami la funzione e vuoi inserire come parametro una variabile di PHP non puoi fare
// echo 'jsFromPHP('.$ciao.');';
//In quanto è come se stessi scrivendo 'jsFromPHP(Questo è un testo);'
//Quindi per far funzionare il tutto devi scrivere:
// echo 'jsFromPHP("'.$ciao.'");';
//Mettendo le virgolette prima di concatenare in modo che il risultato sia 'jsFromPHP("Questo è un testo");'


<script type="text/javascript" src="index.js"></script>

<?php

$ciao = "Questo è un testo";

if(true)
{
    print("Fatto!\n");
    echo '<script>jsFromPHP(".$ciao.");</script>';
} else {
    print("Errore!.\n");
}


?>