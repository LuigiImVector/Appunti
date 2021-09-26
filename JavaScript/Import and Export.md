# [[Import]] and [[Export]]

If you want to use a function or a variable in an another [[JavaScript]] file you have to share it with `export`.

```js
export const add = (x, y) => {
  return x + y;
}

export function (x, y) {
  return x + y;
}
```

```js
const add = (x, y) => (x + y);
const subtract = (x, y) => (x - y);

export { add, subtract };
```

`import` allows you to choose which parts of a file or module to load.

```js
import { add, subtract } from './file.js';
import *  as nameModule from './file.js';
```

The `./` tells the import to look for the `file.js` file in the same folder as the current file.

---

#### Export/Import Fallback

A [[fallback value]] is a value you would use when the main thing you requested is not available.
The [[default export]] can be used only <u>once per module</u>. This is because it’s the value imported when the functionality you requested is not found.

```js
export default function add(x, y) {
  return x + y;
}
```

Since `export default` is used to declare a fallback value for a module or file, you can only have one value be a default export in each module or file.
**Additionally**, you cannot use `export default` with `var`, `let`, or `const`.

To `import` a default export you have write this:

```js
import add from "./file.js";
```
