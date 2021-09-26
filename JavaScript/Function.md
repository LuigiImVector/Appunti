# Function
You can insert part of [[code]] in a [[function]] to make easy [[debugging]] and writing.

```javascript
function myFunction(parameters) {
	// some stuff
	
	// without return stantement function will return: underfined
}

myFunction(parameters);
```

The [[variables]] declared into a function with the `var` [[construct]] are [[local variables]] ([[local scope]]) and it will not be visible outside the function.
Else if the variables which are declared inside a function without the `var` construct are automatically created in [[global scope]] (just like the variables declared outside the functions).

**N.B.**
When a `return` statement is reached, the execution of the current function stops not executing the next instruction.

---

#### Arrow Functions

In [[JavaScript]], we often don't need to name our [[functions]], especially when passing a function as an [[argument]] to another function. Instead, we create [[inline]] functions. We don't need to name these functions because we do not reuse them anywhere else.

To achieve this, we often use the following [[syntax]]:

```js
const myFunc = function() {
  const myVar = "value";
  return myVar;
}
```

[[ES6]] provides us with the [[syntactic sugar]] to not have to write anonymous functions this way. Instead, you can use **arrow function syntax**:

```js
const myFunc = () => {
  const myVar = "value";
  return myVar;
}
```

When there is no function body, and only a [[return]] [[value]], [[arrow function]] syntax allows you to omit the keyword `return` as well as the brackets surrounding the [[code]]. This helps simplify smaller functions into one-line [[statements]]:

```js
const myFunc = () => "value";
```

If an arrow function has a single [[parameter]], the parentheses enclosing the parameter may be omitted.

```js
const doubler = item => item * 2;
```

With multiple parameters this cannot be done.

```js
const multiplier = (item, multi) => item * multi;
multiplier(3, 5);
```

You can also set **default parameters**.

```js
const greeting = (name = "Anonymous") => "Hello " + name;

console.log(greeting("John")); // hello john
console.log(greeting()); // hello anonymous
```

---

#### Rest Parameter

With the [[rest parameter]], you can create functions that take a [[variable]] number of [[arguments]]. These arguments are stored in an [[array]] that can be accessed later from inside the function.

```js
function howMany(...args) {
  return "You have passed " + args.length + " arguments.";
}
console.log(howMany(0, 1, 2)); // 3
console.log(howMany("string", null, [1, 2, 3], { })); // 4
```

The rest parameter eliminates the need to check the `args` array and allows us to apply `map()`, `filter()` and `reduce()` on the parameters array.