# If statement

The scope of `if`  is to execute some [[code]] only when certain [[condition]] are verified.

```javascript
if(condition) {
	// code
} else if (condition) {
	// code
} else {
	// code
}
```

The **[[equality operator]]** (`==`) convert one type to another [[if]] the [[Data masking]] it's different (ex. `2 == '2'`) and this is know as *[[Type Coercion]]*.

The [[strict equality operator]] (`===`) doesn't covert the [[values]] if they are different (ex. `2 === '2' // output: false`).

There are the [[logical]] opposite of these: `!=` ([[inequality operator]]) and `!==` ([[strict inequality operator]]).

**N.B.**
To find the [[type]] of data you have to write this: `typeof 3` (without [[parenthesis]])

---

#### Trick
#trick #javascript


You can transfrom that:
```javascript
function isEqual(a,b) {
  if (a === b) {
    return true;
  } else {
    return false;
  }
}
```

in that:

```javascript
function isEqual(a,b) {
  return a === b;
}
```