# Pipes
Tag: #angular 
URL: https://www.youtube.com/watch?v=AAu8bjj6-UI

Use pipes to transform strings, currency amounts, dates, and other data for display.

For create a new [[pipes]]: `ng g p name-of-pipe`

##### EXAMPLES
```ts
export class AppComponent {
  todaysDate = new Date();
}
```

```html
{{todaysDate | date : 'EEEE MMMM d y' | uppercase}}
<!-- Result: SUNDAY JULY 24 2022 -->
```

But you can also create a custom pipe using [[Angular CLI]]: `ng g p name-of-pipe`:
```ts
import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'concatenateWord'
})
export class ConcatenateWordPipe implements PipeTransform {

  transform(value: string, ...args: unknown[]): string {
    return `Hello ${value}`;
  }
}
```

```html
{{'world' | concatenateWord}}
<!-- Result: Hello world -->
```

