# Regular Expressions
*Regular expression ([[regex]]/[[regexp]]) are used in [[programming languages]] to match parts of [[strings]]. You create [[patterns]] to help you do that matching.*

> **Note:** The regex is [[case sensitive]].

---

#### .test()

`.test()`  is one way to test a regex.

```js
let testStr = "freeCodeCamp";
let testRegex = /Code/;
testRegex.test(testStr); // true
```


---

#### .match()

`.math()` method extracts the actual matches string.

```js
let ourStr = "Regular expressions are expressions";
let ourRegex = /expressions/;
ourStr.match(ourRegex); // ["expressions"]
```

---

#### .replace()

You can search and replace text in a string using `.replace()` on a string.

```js
let wrongText = "The sky is silver.";
let silverRegex = /silver/;
wrongText.replace(silverRegex, "blue"); // "The sky is blue"
```

```js
"Code Camp".replace(/(\w+)\s(\w+)/, '$2 $1');
```

---

#### Multiple patterns

If you want to match different string you have to add [[logical]] operator `OR`.

```js
let testRegex = /yes|no|maybe/;
```

---

#### Ignore case (sensitive)

To disable the case sensitive you have to add the `i` [[flag]].

```js
let testRegex = /fReeCODEcamp/i;
```

---

#### Extract a pattern more than once

To search or extract a [[pattern]] more than once, you can use the `g` flag.

```js
let testStr = "Repeat, Repeat, Repeat";
let repeatRegex = /repeat/gi;
testStr.match(repeatRegex); // ["Repeat", "Repeat", "Repeat"]
```

> **Note:** If no string are matched the function returns `null`.
> **Note:** You can't use `.test()` because it returns only true/false.
> **Note:** You can use multiple [[flags]].


---

#### Wildcard Period

The [[Wildcard Period]] ([[jolly]]), also called `dot` and `period`, is useful if one o more word(s) can have a [[misspelling]]. 
The wildcard character (`.`) will match any one character after or before the dot.

```js
let humStr = "I'll hum a song";
let hugStr = "Bear hug";
let huRegex = /hu./;
huRegex.test(humStr); // true
huRegex.test(hugStr); // true
```

---

#### Match Single Character with Multiple Possibilities

You can search for a [[literal pattern]] (see above) with some flexibility with [[character classes]].
**Character classes** allow you to define a group of characters you wish to match by placing them inside square (`[` and `]`) brackets.

```js
let bigStr = "big";
let bagStr = "bag";
let bugStr = "bug";
let bogStr = "bog";

let bgRegex = /b[aiu]g/;

bigStr.match(bgRegex); // true
bagStr.match(bgRegex); // true
bugStr.match(bgRegex); // true
bogStr.match(bgRegex); // false
```

---

#### Range of characters

If you want to match a range of letters or numbers you have to write this:

```js
let testRegex = /[a-z]/; // from a to z (lowercase)
let testRegex = /[a-e]/; // a, e, i, o, u (lowercase)
let testRegex = /[1-9]/; // from 1 to 9
let testRegex = /[a-z0-9]/gi; // a to z, 0 to 9, multiple patterns extracted and case-insensive
```

---

#### Negated characters sets

To create a [[negated character set]], you place a caret character (`^`) after the opening bracket and before the characters **you do not want to match**.

```js
let myRegex = /[^a-e0-1]/gi;
```

---

#### Match beginning string patterns

If you put `^` outside a character set (look above) this means that the character is used to search at the beginning of string.

```js
let firstString = "Ricky is first and can be found.";
let firstRegex = /^Ricky/;
firstRegex.test(firstString); // true
let notFirst = "You can't find Ricky now.";
firstRegex.test(notFirst); // false
```

---

#### Match ending string patterns

If you put `$` after the regex it will search the pattern at the end of the string.

```js
let theEnding = "This is a never ending story";
let storyRegex = /story$/;
storyRegex.test(theEnding); // true
let noEnding = "Sometimes a story will have to end";
storyRegex.test(noEnding); // true
```

---

#### Match characters that occur <u>One</u> or More Times
Sometimes, you need to match a character (or group of characters) that appears one or more times in a row.
You have to add `+`.

```js
let difficultSpelling = "Misssissippi";
let myRegex = /s+/g;
let result = difficultSpelling.match(myRegex); // ["sss", "ss"]

let myRegex = /s+/;
let result = difficultSpelling.match(myRegex); // ["sss"]

let myRegex = /s/g;
let result = difficultSpelling.match(myRegex); // ["s", "s", "s", "s", "s"]
```

---

#### Match characters that occur <u>Zero</u> or More Times

There's an option that matches characters that occur zero or more times: `*`

```js
let soccerWord = "gooooooooal!";
let gPhrase = "gut feeling";
let oPhrase = "over the moon";
let goRegex = /go*/;
soccerWord.match(goRegex); // ["goooooooo"]
gPhrase.match(goRegex); // ["g"]
oPhrase.match(goRegex); // null
```

---

#### Greedy search

In the [[greedy mode]] (by default) a quantified character is repeated as many times as possible.
You can enable it by putting `.+` after the quantifier.

```js
let regexp = /".+"/g;
let str = 'a "witch" and her "broom" is one';
let result = str.match(regexp); // ['"witch" and her "broom"'']
```


Read more: https://javascript.info/regexp-greedy-and-lazy#greedy-search

---

#### Lazy matching

The [[lazy mode]] of quantifiers is an opposite to the [[greedy mode]]. It means: “repeat minimal number of times”.
You can enable it by putting `?` after the quantifier.

```js
let regexp = /".+?"/g;
let str = 'a "witch" and her "broom" is one';
let result = str.match(regexp); // ["witch", "broom"]
```


Read more: https://javascript.info/regexp-greedy-and-lazy#lazy-mode

---

#### Check for All or None

You can specify the possible existence of an element with a question mark, `?`. This checks for zero or one of the preceding element.

```js
let american = "color";
let british = "colour";
let rainbowRegex= /colou?r/;
rainbowRegex.test(american); // true
rainbowRegex.test(british); // true
```

---

#### Match all letters and numbers

To match all the letters and numbers you can use `\w` in alternative to `/[a-z0-9]/i`.

To do the opposite you cab use `\W` in alternative to `/[^a-z0-9]/i`.

```js
let lower = /\w/g;
let upper = /\W/g;
let test = "abc 42%";
test.match(lower); // [ 'a', 'b', 'c', '4', '2' ]
test.match(upper); [ ' ', '%' ]
```

---

#### Match all number

To match all numbers you can use `\d`.
To not match all numbers you can use `\D`.

---

#### Match whitespace

To match all numbers you can use `\s`.
To not match all numbers you can use `\S`.

---

#### Quantity specifiers

[[Quantity specifiers]] are used with curly brackets (`{` and `}`). With this you can match only a certain range of patterns.

- ##### Lower and Upper number

	```js
	let A6 = "aaaaaah";
	let A4 = "aaaah";
	let A2 = "aah";
	let multipleA = /a{3,5}h/;
	multipleA.test(A4); // true
	A6.match(multipleA); // ["aaaaa"]
	multipleA.test(A2); // false
	```

- **Only Lower number**
	```js
	let A4 = "haaaah";
	let A2 = "haah";
	let A100 = "h" + "a".repeat(100) + "h";
	let multipleA = /ha{3,}h/;
	multipleA.test(A4); // true
	multipleA.test(A2); // false
	multipleA.test(A100); // true
	```

- **Exact Number of matches**
	```js
	let A4 = "haaaah";
	let A3 = "haaah";
	let A100 = "h" + "a".repeat(100) + "h";
	let multipleHA = /ha{3}h/;
	multipleHA.test(A4); // false
	multipleHA.test(A3); // true
	multipleHA.test(A100); // false
	```

---

#### Lookahead

[[Lookaheads]] are patterns that tell [[JavaScript]] to look-ahead in your string to check for patterns further along. This can be useful when you want to search for multiple patterns over the same string.

- **Positive lookahead** will look to make sure the element in the search pattern is there, but won't actually match it.
	A [[positive lookahead]] is used as `(?=...)` where the `...` is the required part that is not matched.
- **Negative lookahead** will look to make sure the element in the search pattern is not there.
	A [[negative lookahead]] is used as `(?!...)` where the `...` is the pattern that you do not want to be there. The rest of the pattern is returned if the negative lookahead part is not present.

```js
let quit = "qu";
let noquit = "qt";
let quRegex= /q(?=u)/;
let qRegex = /q(?!u)/;
quit.match(quRegex); // ["q"]
noquit.match(qRegex); // ["q"]
```

---

#### Mixed grouping of characters

Sometimes we want to check for groups of characters using a Regular Expression and to achieve that we use parentheses `()`.

```js
let testStr = "Pumpkin";
let testRegex = /P(engu|umpk)in/;
testRegex.test(testStr); // true
```

---

#### Capture Groups

[[Capture groups]] can be used to find repeated substrings.
Capture groups are constructed by enclosing the regex pattern to be captured in parentheses.

The substring matched by the group is saved to a **temporary "variable"**, which can be accessed within the same regex using a backslash and the number of the capture group (e.g. `\1`). Capture groups are automatically numbered by the position of their opening parentheses (left to right), starting at 1.


```js
let repeatStr = "row row row your boat";
let repeatRegex = /(\w+) \1 \1/;
repeatRegex.test(repeatStr); // Returns true
repeatStr.match(repeatRegex); // Returns ["row row row", "row"]
```
