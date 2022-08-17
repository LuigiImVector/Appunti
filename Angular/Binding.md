# Binding
Tag: #angular 
URL: https://www.youtube.com/watch?v=AAu8bjj6-UI

## Property binding

Similar to [[Angular#Text Interpolation]] is Property Binding:
```html
<!-- Text interpolation -->
<img src="{{itemImageUrl}}">

<!-- Property binding -->
<img [src]="itemImageUrl"> 
<button [disabled]="osImcjamged">Disabled button</button>
```

## Attribute binding

Set [[attribute]] directly if the [[element]] doesn't have a specific [[property]] (bind).
```html
<tr>
    <td [attr.colspan]="1+1">one-two</td>
</tr>
```

## Class binding

```html
<div [class.darkMode]="isDark"></div>
<div [class]="'flex-container bg-light-gray text-align'"></div>
<div [class]="{
	flex-container: true,
	bg-light-gray: true,
	text-align: false
     }"></div>
<div [class]="['flex-container', 'bg-light-gray', 'text-align']"></div>
```

## Style binding

```html
<div [style.width]="width"></div>
<div [style]="'width: 100px; height: 100px; background-color: red;'"></div>
<div [style.background-color]="bgColor"></div>
<div [style.backgroundColor]="bgColor"></div>
```

- You can use both the [[kebab case]] and the [[upper case]].
- You can use [[object notation]] but not the [[array notation]].

## Event binding

```html
<button (click)="showAlert()">Save</button>
```

See also [[Components communications#Child to Parent using output decorator]] a more complex example.

## Two-ways binding

It combine event and property binding.

`app-sizer.components.ts`:
```ts
export class AppSizerComponent implements OnInit {
  @Input() size: number;
  @Output() sizeChange = new EventEmitter<number>();

  constructor() { }

  ngOnInit(): void {
  }

  dec() {
    this.resize(-1);
  }

  inc() {
    this.resize(+1);
  }

  resize(delta: number) {
    this.size = Math.min(40, Math.max(8, +this.size + delta));
    this.sizeChange.emit(this.size);
  }
}
```

`app-sizer.component.html`:
```html
<div>
    <button (click)="dec()">-</button>
    <button (click)="inc()">+</button>
    <label [style.font-size.px]="size">Font size: {{ size }}</label>
</div>
```

`app.component.ts`:
```ts
export class AppComponent implements OnInit, OnDestroy {
  fontSizePx = 16;
}
```

`app.component.html`:
```html
<app-sizer [(size)]="fontSizePx"></app-sizer>
<!-- It's equal to: -->
<app-sizer [size]="fontSizePx" (sizeChange)="fontSizePx"></app-sizer>

<div [style.font-size.px]="fontSizePx">Two-ways binding</div>
```