# Conditional (Ternary) Operator
`a ? b : c` is the equivalent of if/else statements:
- `a` is the condition
- `b` is the code to run when the condition is `true`
- `c` is the code to run when the condition is `false`

```js
function findGreater(numA, numB) {
  return (numA > numB) ? "numA is greater" : "numB is greater or equal";
}
```

---

#### Multiple Conditional (Ternary) Operators

```js
function findGreaterOrEqual(a, b) {
  // respect the style of code
  return (a === b) ? "a and b are equal" 
    : (a > b) ? "a is greater" 
    : "b is greater";
}
```

is the equivalent of:

```js
function findGreaterOrEqual(a, b) {
  if (a === b) {
    return "a and b are equal";
  }
  else if (a > b) {
    return "a is greater";
  }
  else {
    return "b is greater";
  }
}
```

