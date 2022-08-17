# About CSS
Tag: #angular
URL: https://www.youtube.com/watch?v=AAu8bjj6-UI

You can add [[CSS]] in your [[application]] in three different ways:
- `styles` [[metadata]]
```ts
@Component({
    selector: 'app-hello-world',
    template: '<h1>{{title}}: {{getSum(1,4)}}</h1>',
    styles: [`
    h1 {
        color: blue;
    }
    `]
})
```
- `styleUrls` metadata:
```ts
@Component({
  selector: 'app-parent',
  templateUrl: './parent.component.html',
  styleUrls: ['./parent.component.css']
})
```
- inside the HTML file using `<style></style>`
- using the tag `<link />` inside the [[HTML]] file:
```html
<link rel="stylesheet" href="/assets/external-style.css" />
```
- using `@import` inside `child.component.css`:
```css
@import '../../assets/external-style.css';
```
- by adding rules in `styles.css` or create a new global css file and put in the `angular.json`


> **WARNING** ❗
> Be sure to include the file in the `assets/` folder to be copied to the server when building

#### Encapsulation
![[Pasted image 20220724171016.png]]

If you don't want to see this, write `encapsulation: ViewEncapsulation.None` inside the `@Component`.

## Special selector

- `:host`, you select the element "host", so the [[component]] where this css is applied. You can also write `:host(.class-name)` to select a specific class in the host
- `:host-context` apply styles to elements within a component's template based on some condition in an element that is an ancestor of the host element, for example:
```html
<div class="theme-light">
	<app-child></app-child>
</div>
```

```css
:host-context(.theme-light) h2 {
	background-color: #eef;
}
```

Learn more: https://angular.io/guide/component-styles