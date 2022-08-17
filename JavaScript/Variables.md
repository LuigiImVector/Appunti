# Variables

In [[JavaScript]] there are eight different [[data types]] which are: `undefined`, `null`, `boolean`, `string`, `symbol`, `bigint`, `number`, and `object`.

[[Variables]] allow [[computers]] to store and manipulate [[Data masking]] in a [[dynamic fashion]]. They do this by using a *label* to point the data rather than using the data itself.

To [[declare]] a variable you can use: `var`, `let` and `const`.

- `var` [[declares]] a variable and it can be [[overwrited]].
  - 
    ```js
	  var camper = 'James';
	  var camper = 'David';
	  // no error
    ```
- `let` just like `var` but the variables can be overwrited (useful when you write so much [[code]] you can accidentally [[overwrite]] a variable and this can cause [[issues]]).
  - 
    ```js
	  let camper = 'James';
	  let camper = 'David';
	  // error
    ```
- `const` is just like a `let` variable but it is [[read-only]] (usually the `const` variables' name are in [[uppercase]]) but in an array you can edit a single value.
  - 
    ```js
	const FAV_NAME = "Luigi";
	FAV_NAME = "Francesco"; // error
	// --- //
	const S = [5, 6, 7];
    S = [1, 2, 3]; // error
    S[2] = 45;
    console.log(S); // output: [5, 6, 45]
    ```
	

**WARNING!** ⚠
```js
let printNumTwo;
for (let i = 0; i < 3; i++) {
  if (i === 2) {
    printNumTwo = function() {
      return i;
    };
  }
}
console.log(printNumTwo()); // 2
console.log(i); // i is not defined
```

In this case I declared `i` with `let` [[statement]] but it isn't a global variable (how it would be with `var`) but is a local variable.

---

#### Case sensitive

Variable names is [[case sensitive]], the correct way to write a correct variable name you have to write like this: `multiWordVariableNames`.

---

#### String

`var myName = "Mario Rossi"` the [[characters]] enclosed in a double (or single) [[quotes]] is called *[[string literal]]*.

Just like in C++, also in JavaScript you can use *bracket notation* to get a character from a string.

```js
var firstName = "Charles";
var firstLetter = firstName[firstName.length-1]; // Output: "s"
```

**N.B.**
You cannot edit only one character with this [[method]], i have to change all [[string]].

---

#### Escaping sequences

The [[backslash]] (`\`) can be used for many reasons:


Code | Output
---- | ----
`\'` | single quote
`\"` | double quote
`\\` | backslash
`\n` | newline
`\r` | carriage return
`\t` | tab
`\b` | word boundary
`\f` | form feed

`\b`:
`\f`:

---

#### Strict mode

This enables [[Strict Mode]], which catches common coding mistakes and "unsafe" actions. For instance:

```js
"use strict"; // enable Strict Mode
x = 3.14;
// error: x is not defined
```


Learn more: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Strict_mode

---

#### Risorse

https://www.freecodecamp.org/news/var-let-and-const-whats-the-difference/

**N.B.**
If you do a mathematical operation on an [[undefined]] variable your result will be [[NaN]] (*Not a Number*). If you concatenate a string with an *undefined* variable, you will get a literal string of *undefined*.