# Drag and Drop
![[Pasted image 20220114180738.png]]

Drag and Drop using [[JavaScript]] and [[PHP]], tutorial source [here](https://www.webslesson.info/2021/08/drag-and-drop-multiple-file-upload-with-progress-bar-using-javascript.html).

---

## Code

#### HTML & CSS

```html
<!DOCTYPE html>
<html lang="en">
	<head>
	<title>Drag & Drop Upload Multiple File with Progress Bar using JavaScript in PHP</title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">

	<!-- Bootstrap CSS -->
 	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">

	<style>
		 #drag_drop{
			 background-color : #f9f9f9;
			 border : #ccc 4px dashed;
			 line-height : 250px;
			 padding : 12px;
			 font-size : 24px;
			 text-align : center;
		 }
 </style>
 </head>
 <body>
 	<div class="container">
 		<h1 class="mt-5 mb-5 text-center text-primary"><b>Drag & Drop Upload Multiple File with Progress Bar using JavaScript in PHP</b></h1>
	 	<div class="card">
	 		<div class="card-header">Drag & Drop File Here</div>
	 		<div class="card-body">
	 			<div class="row">
	 				<div class="col-md-3">&nbsp;</div>
	 					<div class="col-md-6">
	 						<div id="drag_drop">Drag & Drop File Here</div>
	 					</div>
	 					<div class="col-md-3">&nbsp;</div>
	 				</div>
	 			</div>
	 		</div>
	 		<br />
	 		<div class="progress" id="progress_bar" style="display:none; height:50px;">
	 			<div class="progress-bar bg-success" id="progress_bar_process" role="progressbar" style="width:0%; height:50px;">0%
	 		</div>
	 	</div>
	 	<div id="uploaded_image" class="row mt-5"></div>
 	</div>
	<script src="script.js" />
</body>
</html>
```

#### JavaScript

```js
function _(element)
{
 	return document.getElementById(element);
}
// Styling input box
_('drag_drop').ondragover = function(event)
{
 	this.style.borderColor = '#333';
 	return false;
}

_('drag_drop').ondragleave = function(event)
{
 	this.style.borderColor = '#ccc';
 	return false;
}

// Send files to PHP file (upload.php)
_('drag_drop').ondrop = function(event)
{
	_('uploaded_image').innerHTML = '';
	
	// It allows not to open the files just dropped in the page but to leave everything unchanged
    event.preventDefault();
    var form_data  = new FormData();
    var image_number = 1;
    var drop_files = event.dataTransfer.files;

    for(var count = 0; count < drop_files.length; count++)
    {
        form_data.append("images[]", drop_files[count]);
    }

    var ajax_request = new XMLHttpRequest();   
	 // XMLHttpRequest.upload() state: load (The upload completed successfully)
	ajax_request.addEventListener('load', function(event){	
		_('uploaded_image').innerHTML = '<div class="alert alert-success">Files Uploaded Successfully</div>';
		_('drag_drop').style.borderColor = '#ccc';
	});
	ajax_request.open("post", "upload.php");

	ajax_request.send(form_data);
}
```

#### PHP (upload.php)

```php
<?php
if(isset($_FILES['images']))
{
    $file_name = $_FILES['images']['name'];
	for($count = 0; $count < count($_FILES['images']['name']); $count++)
	{
		move_uploaded_file($_FILES['images']['tmp_name'][$count], 'images/' . $file_name[$count]);
	}
	echo 'success';
}
?>
```

---

## Notes & Tips
#tips #trick

#### Code more elegant
This [[function]] avoid you to write `document.getElementById()` every time.
```js
function _(element)
{
    return document.getElementById(element);
}
```

#### Accept only certain files

```js
for(var count = 0; count < drop_files.length; count++)
{
	if(!['image/jpeg', 'image/png', 'video/mp4'].includes(drop_files[count].type))
	{
		error += 'This file is not accepted';
	} else {
		form_data.append("images[]", drop_files[count]);
	}
}
```

#### XMLHttpRequest\.upload

[MDN says](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/upload): The spec also seems to indicate that event listeners should be attached after `open()`. However, [[browsers]] are buggy on this matter, and often need the listeners to be registered **before** `open()` to work.

```js
var ajax_request = new XMLHttpRequest();   
ajax_request.addEventListener('load', function(event){	
	// Do something...	
});
ajax_request.open("post", "upload.php");
ajax_request.send(form_data);
```

#### No braces for one line statement
Just like in [[C++]], also in JavaScript the braces (`{}`) can be odmitted for one-line statement.
```js
for(var count = 0; count < drop_files.length; count++)
	form_data.append("images[]", drop_files[count]);
```