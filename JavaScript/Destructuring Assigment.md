#### Destructuring Assigment

[[Destructuring assignment]] is special syntax introduced in [[ES6]] that makes it possible to unpack values from [[array]]/[[object]], into distinct variables.

---

#### Simple variables
```js
let a, b, rest;
[a, b] = [10, 20];
console.log(a); // 10
console.log(b); // 20
```

---

#### Arrays
```js
const foo = ['one', 'two', 'three'];

const [red, yellow, green] = foo;
console.log(red); // "one"
console.log(yellow); // "two"
console.log(green); // "three"
```

```js
const [a, b,,, ...arr] = [1, 2, 3, 4, 5, 6, 7];
console.log(a, b); // 1, 2
console.log(arr); // [5, 6, 7]
```

---

#### Objects

```js
const user = {
    id: 42,
    isVerified: true
};

const {id, isVerified} = user;

console.log(id); // 42
console.log(isVerified); // true

const {id: userId, isVerified=check} = user;

console.log(userId); // 42
console.log(check); // true
```

---

#### Nested Objects

```js
const user = {
  johnDoe: { 
    age: 34,
    email: 'johnDoe@freeCodeCamp.com'
  }
};

const { johnDoe: { age, email:userEmail }} = user;

console.log(userEmail); // johnDoe@freeCodeCamp.com
```

---

**Learn more**: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment