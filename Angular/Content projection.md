# Content projection
Tag: #angular
Source: https://angular.io/guide/content-projection

`ng-content` uses the content projection to take an [[HTML]] of another component and display it inside itself. You can have [[multiple slot]] using the content projection.

##### Example
`child.component.html`:
```html
<h2>Hello from Child!</h2>
<ng-content></ng-content>
<ng-content [question]></ng-content>
<ng-content [answer]></ng-content>
```

`app.component.html`:
```html
<app-child>
	<p>Hello from root!</p>
	<h3 question>What is this?</h3>
	<p answer>A multiple slot content projection!</p>
</app-child>
```