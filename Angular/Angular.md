# Angular
Tag: #angular 
URL: https://it.wikipedia.org/wiki/Angular, https://www.youtube.com/watch?v=AAu8bjj6-UI

Angular (not [[AngularJS]], whose support is terminated) is a [[framework]] based on [[TypeScript]] created mainly by [[Google]] allows the user to create a [[Single Page Application]].

![[Pasted image 20220720203701.png]]

## Components

[[Components]] are the main building block of angular application, each component consist of:
- [[HTML]] template
- TypeScript class
- [[CSS]] selector
- CSS styles

Why use components?
- Reuse code
- Component-base architecture
- Error handling
- Breaking down complexity

#### Create a new MODULE
Create a file in `project/src/app/` calling it `hello-world.component.ts`:
```ts
import { Component } from '@angular/core';

@Component({
    selector: 'app-hello-world',
    template: '<h1>{{title}}</h1>',
    styleUrls: ['./app.component.css']
})

export class HelloWorldComponent {
    title = 'Hello World';
}
```

Using [[double curly braces]] you can write something external in the HTML template; more below.

Then you need to include this new module in `app.module.ts`:
```ts
// ...
NgModule({
  declarations: [
    AppComponent,
    HelloWorldComponent
  ],
// ...
```

And in `app.component.html` write this:
```html
<app-hello-world></app-hello-world>
```

#### Text Interpolation
```html
{{title}}
{{1+1}}
{{getSum(2,5)}}
```

```ts
export class HelloWorldComponent {
    title = 'Hello World';

    getSum(a:number, b:number) {
        return a+b;
    }
}
```

> **NOTE** 📝
> You can't use assignment operators, chaining expressions, some ES2015+ operators...

See also [[Binding#Property Binding]].

## Command

- Create a [[workspace]] and initial application: `ng new my-app`
- Start the [[server]]: `ng serve`
- Create new [[component]]: `ng g c name-of-it`
- Create new [[pipes]]: `ng g p name-of-pipe`
