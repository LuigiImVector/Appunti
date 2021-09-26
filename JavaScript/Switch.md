# Switch
[[Switch]] [[statement]] is useful to test a value can have many possible [[value]] [[case]]. 

```javascript
switch(lowercaseLetter) {
	case "a":
		console.log("A");
		break;
	case "b":
		console.log("B");
		break;
	default: // like "else"
		console.log("other");
		break;
}
```

`case` values are tested with [[strict equality operator]] (`===`).

If the `break` statement is omitted the following statement(s) are executed until a [[break]] is encountered. It is useful when you have multiple inputs with the same output.

```javascript
var result = "";
switch(val) {
  case 1:
  case 2:
  case 3:
    result = "1, 2, or 3";
    break;
  case 4:
    result = "4 alone";
}
```