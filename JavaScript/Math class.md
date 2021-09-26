# Math class

## Math.random()
How `Math.random()` works? My professor ([[Giuseppe Attinà]]) says that one of the [[method]] to get a [[number]] [[randomly]] is *divide 1 by some number*.

There is a list with all of the [[random generator]] method: https://en.wikipedia.org/wiki/List_of_random_number_generators

---

#### Integer number

```js
Math.floor(Math.random);
```

`Math.random` generate a [[random]] number.
`Math.floor` round down the number.

---

#### Range

```js
Math.floor(Math.random() * (max - min + 1)) + min
```

**Step-by-step explaination**:
- `max = 10`, `min = 2`.
- Math.random()\*(10-2+1) -> 9
- It generate a number between 0 and 8 (last number is excluded)
- After all adds to result 2
- Result is a number between 2 and 10

---

## Math.max()

^cddb80

The `Math.max()` [[function]] returns the largest number between those given as [[input]].

```js
console.log(Math.max(1, 3, 2)); // output: 3
```

If you want to pass as parameter an [[array]] you have to use [[Array#^4b0e46]] ([[spread operator]]) or the method `apply()`.

```js
const arr = [6, 89, 3, 45];
var maximus = Math.max(...arr);
var maximus = Math.max.apply(null, arr);
```


**Learn more**: [Math.max()](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/max), [Math.max.apply()](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Function/apply)