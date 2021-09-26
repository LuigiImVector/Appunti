# Class

---

#### Use *class* Syntax to Define a *Constructor* Function

*transfer to [[Object]], maybe...*

❗ It should be noted that the `class` [[syntax]] **is just syntax**, and **not** a full-fledged class-based implementation of an object-oriented paradigm, unlike in languages such as Java, Python, Ruby, etc.

In [[ES5]], we usually define a `constructor` function and use the `new` keyword to instantiate an object.

```js
var SpaceShuttle = function(targetPlanet){
  this.targetPlanet = targetPlanet;
}
var zeus = new SpaceShuttle('Jupiter');
```

in [[ES6]] the syntax is simplifier:

```js
class SpaceShuttle {
  constructor(targetPlanet) {
    this.targetPlanet = targetPlanet;
  }
}
const zeus = new SpaceShuttle('Jupiter');
```

> **Note:** UpperCamelCase should be used by convention for ES6 class names.

---

#### get() and set()

[[Getter]] [[functions]] return the value of an [[object]]'s private [[variable]].

[[Setter]] functions motify the value of an object's private variable.

```js
class Book {
  constructor(author) {
    this._author = author;
  }
  // getter
  get writer() {
    return this._author;
  }
  // setter
  set writer(updatedAuthor) {
    this._author = updatedAuthor;
  }
}

const novel = new Book('anonymous');
console.log(novel.writer); // anonymous
novel.writer = 'newAuthor';
console.log(novel.writer); // newAuthor
```

> **Note:** It is convention to precede the name of a private variable with an [[underscore]] (`_`). However, the practice itself does not make a variable private.

