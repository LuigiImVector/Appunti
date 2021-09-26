# [[Promise]]
*A promise in [[JavaScript]] is exactly what it sounds like - you use it to make a promise to do something, usually asynchronously.*

---

[[Promises]] are most useful when you have a process that takes an unknown amount of time in your code, often a server request.
When the task completes, you either fulfill your promise or fail to do so.

`Promise` is a [[constructor]] [[function]], so you need to use the `new` keyword to create one. It takes a function, as its [[argument]], with two [[parameters]] - `resolve` and `reject`. These are [[methods]] used to determine the outcome of the promise.

A promise has three states:
- `pending`
- `fulfilled`
- `rejected`

```js
const myPromise = new Promise((resolve, reject) => {
	if(condition) {
    resolve("Promise was fulfilled");
  } else {
    reject("Promise was rejected");
  }
});
```

---

#### then() and catch()

If promise is fulfilled the `then` method is executed otherwise if promise is rejected the `catch` method is executed.

```js
myPromise
	.then(result => {
  // stuff
	})
	.catch(error => {
		// another stuff
	});
```

---

#### Resources

[MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise?retiredLocale=it)
[html\.it](https://www.html.it/pag/65391/promise-native/)
