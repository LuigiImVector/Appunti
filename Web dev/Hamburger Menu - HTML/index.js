var menuAperto = false;

document.getElementById("menu").onclick = function () {
	if(!menuAperto)
	{
		document.getElementById("menu").classList.add("animazione");
		menuAperto = true;
	} else {
		document.getElementById("menu").classList.remove("animazione");
		menuAperto = false;
	}
};