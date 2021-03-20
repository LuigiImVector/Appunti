<?php
    $file_name = $_FILES['fileToUpload']['name'];
    $tmp_file_name = $_FILES['fileToUpload']['tmp_name'];


    //Quando devi uploadare un'immagine inserisci il percorso completo (C:/.../) con uno slash finale per fargli capire esattamente dove dovrà andare il file
    //Ricordati questa cosa soprattutto se hai un localhost "modificato"

    $img="C:/Users/luigi/Desktop/html/Upload file/uploads/".basename($file_name);
    print($img);
    
    if(move_uploaded_file($tmp_file_name, $img)){
        echo "ok";
    }
?>
