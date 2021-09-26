# Template Literals

This is a special type of [[string]] that makes creating complex strings easier.

```js
const person = {
  name: "Zodiac Hasbro",
  age: 56
};

const greeting = `Hello, my name is ${person.name}!
I am ${person.age} years old.`;

console.log(greeting);
/*
* output:
* Hello, my name is Zodiac Hasbro!
* I am 56 years old.
*/
```

A lot of things happened there:
- It uses [[backticks]] (`` \` ``), not [[quotes]] (`'` or `"`), to wrap the [[string]].
- Notice that the string is [[multi-line]], both in the [[code]] and the [[output]]. This saves inserting `\n` within strings.
- The `${variable}` [[syntax]] used above is a [[placeholder]]. Basically, you won't have to use concatenation with the `+` operator anymore. 
   Similarly, you can include other expressions in your [[string literal]], for example `${a + b}`.