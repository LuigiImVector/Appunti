# Array

With the [[array]] you can store several pieces of different [[Data masking]] in one place.

Different way to [[declare]] an array:
```javascript
var a = [];
var b = [3] // array length: 3
var c = ["peanut butter", 123, "bread", true];
var d = new Array();
var e = new Array(5); // array length: 5
var f = new Array("firefox", 420);
```

---

#### Multi-dimensional array

```javascript
var a = [[],[]]
var b = [[3], [5]]; // row: 3 && column: 5
var c = [["Luigi", 10], ["Francesco", 5]];
```

```javascript
var arr = [
  [1,2,3],
  [4,5,6],
  [7,8,9],
  [[10,11,12], 13, 14]
];

arr[3]; // [[10, 11, 12], 13, 14]
arr[3][0]; // [10, 11, 12]
arr[3][0][1]; // 11
```

---

#### Manipulate Arrays

- **.push()** takes one or more [[parameters]] and pushes them to the end of the array.
  - 

     ```javascript
     var arr1 = [1,2,3];
     arr1.push(4); // [1,2,3,4]
     
     var arr2 = ["Stimpson", "J", "cat"];
     arr2.push(["happy", "joy"]); // ["Stimpson", "J", "cat", "happy",    "joy"];
     ```
  
- **.pop()** removes the last [[element]] (even nested array) from an array and [[returns]] that element.
  - 
     ```javascript
     var threeArr = [1, 4, 6];
     var oneDown = threeArr.pop();
     console.log(oneDown); // 6
     console.log(threeArr); // [1,4]
     ```
- **.shift()** works just like `.pop()` but it removes the first element insead of the last.
  - 
     ```javascript
     var ourArray = ["Stimpson", "J", ["cat"]];
     var removedFromOurArray = ourArray.shift(); // ["J", ["cat"]]
     ```
- **.unshift()** add one or more elements at the beginning of the array.
  - 
     ```javascript
     var ourArray = ["Stimpson", "J", "cat"];
     ourArray.unshift("Happy"); // ["Happy", Stimpson", "J", "cat"]
     ```
	 
Function | Scope | Position
-------- | ----- | --------
.push() | add | last
.unshift() | add | first
.pop() | remove | last
.shift() | remove | first

---

#### Spread Operator

^4b0e46

The [[spread operator]] allows us to expand arrays and other expressions in places where multiple parameters or elements are expected.

> *See the example in [[Math class#^cddb80]]*

```js
const SPREADED = ...arr;
```

`...arr` returns an unpacked array (it spread the array)