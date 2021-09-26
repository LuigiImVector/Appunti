# Object

[[Object]] are similar to [[array]], except that instead of using indexes to access and modify their [[data]], you access the data in ojects through what are called [[properties]].

```js
var cat = {
  "name": "Whiskers",
  "legs": 4,
  "tails": 1,
  "enemies": ["Water", "Dogs"]
  //properties: value
};
```

You can also use numbers as properties.

To access/edit/create/delete the properties you can use [[dot notation]] (`.`) and [[bracket notation]] (`[]`).

```js
var catName = cat.name;
var catLegs = cat["legs"];

cat.color = "black";
delete cat.tails;
```

Another use of bracket notation on [[objects]] is to access a [[property]] which is stored as the value of a [[variable]].

```js
var dogs = {
  Fido: "Mutt",  Hunter: "Doberman",  Snoopie: "Beagle"
};
var myDog = "Hunter";
var myBreed = dogs[myDog]; // "Doberman"
```

**N.B.**

If the name of a property is stored in a variable you have to use the bracket notation to access it.


---

#### Check if a property exists

Use `.hasOwnProperty(propName)` to check if a property exists in that object.

---

#### Array of nested objects

```js
var myMusic = [
	{
 		"artist": "Billy Joel",
		 "title": "Piano Man",
		 "release_year": 1973,
		 "formats": [
			 "CD",
			 "8T",
			 "LP"
		 ],
		 "gold": true
 	}
];

myMusic.unshift({
	 "artist": "Ariana Grande",
	 "title": "Positions",
	 "release_year": 2020,
	 "formats": [
		 "CD",
		 "8T",
		 "LP"
	 ],
	 "stats": {
	 	"spotify": 153165,
		"amazon music": 69420,
		"cd": 1
	 }
});

var ariolaStats = myMusic[0].stats.spotify; // 153165
```

---

#### Object freeze

To protect data inside an object from mutation you need to freeze it, `const` doesn't really protect the data.

```js
Object.freeze(nameObject);
```

---

#### Function as property Object

```js
const person = {
  name: "Taylor",
  sayHello() {
    return `Hello! My name is ${this.name}.`;
  }
};
```

---

#### [[Function]] that returns an Object

```js
const getMousePosition = (x, y) => ({ x, y });
```

is the equivalent of:

```js
const getMousePosition = (x, y) => ({
  x: x,
  y: y
});
```

`getMousePosition` is a simple function that [[returns]] an object containing two properties. [[ES6]] provides the [[syntactic sugar]] to eliminate the [[redundancy]] of having to write `x: x`. You can simply write `x` once, and it will be converted to`x: x` (or something equivalent) under the hood.

---

#### Object constructors/duplications

If you have to create always the same object but you can't write it manually you have to do:

```js
function Player(name, marker) {
  this.name = name
  this.marker = marker
}
```

```js
const player = new Player('steve', 'X')
console.log(player.name) // 'steve'
```